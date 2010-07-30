// ----------------------
// projects/deque/Deque.h
// Copyright (C) 2010
// Glenn P. Downing
// ----------------------

#ifndef Deque_h
#define Deque_h

// --------
// includes
// --------

#include <algorithm> // equal, lexicographical_compare
#include <cassert>   // assert
#include <iterator>  // iterator, bidirectional_iterator_tag
#include <memory>    // allocator
#include <stdexcept> // out_of_range
#include <utility>   // !=, <=, >, >=

// -----
// using
// -----

using std::rel_ops::operator!=;
using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;

using namespace std;

// -------
// destroy
// -------

template <typename A, typename BI>
BI destroy (A& a, BI b, BI e) {
    while (b != e) {
        --e;
        a.destroy(&*e);}
    return b;}

// ------------------
// uninitialized_copy
// ------------------

template <typename A, typename II, typename BI>
BI uninitialized_copy (A& a, II b, II e, BI x) {
    BI p = x;
    try {
        while (b != e) {
            a.construct(&*x, *b);
            ++b;
            ++x;}}
    catch (...) {
        my_destroy(a, p, x);
        throw;}
    return x;}

// ------------------
// uninitialized_fill
// ------------------

template <typename A, typename BI, typename U>
BI uninitialized_fill (A& a, BI b, BI e, const U& v) {
    BI p = b;
    try {
        while (b != e) {
            a.construct(&*b, v);
            ++b;}}
    catch (...) {
        my_destroy(a, p, b);
        throw;}
    return e;}

// -----
// Deque
// -----

template < typename T, typename A = std::allocator<T> >
class Deque {
    public:
        // --------
        // typedefs
        // --------

        typedef A                                        allocator_type;
        typedef typename allocator_type::value_type      value_type;

        typedef typename allocator_type::size_type       size_type;
        typedef typename allocator_type::difference_type difference_type;

        typedef typename allocator_type::pointer         pointer;
        typedef typename allocator_type::const_pointer   const_pointer;

        typedef typename allocator_type::reference       reference;
        typedef typename allocator_type::const_reference const_reference;

    public:
        // -----------
        // operator ==
        // -----------

        /**
         * <your documentation>
         */
        friend bool operator == (const Deque& lhs, const Deque& rhs) {
            size_type mysize = lhs.size();
            
            if(mysize != rhs.size())
                return false;
            
            return std::equal(lhs.begin(), lhs.end(), rhs.begin());
        }

        // ----------
        // operator <
        // ----------

        /**
         * <your documentation>
         */
        friend bool operator < (const Deque& lhs, const Deque& rhs) {
            return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
        }

    private:
        // ----
        // data
        // ----

        typename allocator_type::template rebind<T*>::other outer_a;
        allocator_type a;
        T** container;
        //ends are EXCLUSIVE
        unsigned long beginRow, endRow, beginCol, endCol, numRows;


    private:
        // -----
        // valid
        // -----

        bool valid () const {
            // <your code>
            return true;}

    public:
    
        void info () const {
            vector<size_type> allocatedRows;
            for(size_type i=0; i<numRows; i++)
            {
                if(container[i] != NULL)
                    allocatedRows.push_back(i);            
            }
            
            cout<<"begin:["<<beginRow<<"]["<<beginCol<<"]\tend:["<<endRow<<"]["<<endCol<<"(exc)]\tnumRows:"<<numRows<<"\tsize:"<<size()<<" allocatedRows:[";
            
            typename vector<size_type>::iterator it = allocatedRows.begin();
            while(it != allocatedRows.end())
            {
                cout<<*it<<" ";
                it++;
            }
            cout<<"]"<<endl;
           
        }
        // --------
        // iterator
        // --------

        class iterator {
            public:
                // --------
                // typedefs
                // --------

                typedef std::bidirectional_iterator_tag iterator_category;
                typedef typename Deque::value_type      value_type;
                typedef typename Deque::difference_type difference_type;
                typedef typename Deque::pointer         pointer;
                typedef typename Deque::reference       reference;

            public:
                // -----------
                // operator ==
                // -----------

                /**
                 * <your documentation>
                 */
                friend bool operator == (const iterator& lhs, const iterator& rhs) {
                    return lhs.index == rhs.index && (&(lhs.myDeque) == &(rhs.myDeque));
                }
                // ----------
                // operator +
                // ----------

                /**
                 * <your documentation>
                 */
                friend iterator operator + (iterator lhs, difference_type rhs) {
                    return lhs += rhs;}

                // ----------
                // operator -
                // ----------

                /**
                 * <your documentation>
                 */
                friend iterator operator - (iterator lhs, difference_type rhs) {
                    return lhs -= rhs;}

            private:
                // ----
                // data
                // ----

                size_type index;
                Deque& myDeque;

            private:
                // -----
                // valid
                // -----

                bool valid () const {
                    return index >= 0 && myDeque.valid();
                }

            public:
                // -----------
                // constructor
                // -----------

                /**
                 * <your documentation>
                 */
                iterator (Deque& myDeque, size_type index) : index(index), myDeque(myDeque)
                {
                    assert(valid());
                }

                // Default copy, destructor, and copy assignment.
                // iterator (const iterator&);
                // ~iterator ();
                // iterator& operator = (const iterator&);

                // ----------
                // operator *
                // ----------

                /**
                 * <your documentation>
                 */
                reference operator * () const {
                    return myDeque[index];
                }

                // -----------
                // operator ->
                // -----------

                /**
                 * <your documentation>
                 */
                pointer operator -> () const {
                    return &**this;}

                // -----------
                // operator ++
                // -----------

                /**
                 * <your documentation>
                 */
                iterator& operator ++ () {
                    index++;
                    assert(valid());
                    return *this;}

                /**
                 * <your documentation>
                 */
                iterator operator ++ (int) {
                    iterator x = *this;
                    ++(*this);
                    assert(valid());
                    return x;}

                // -----------
                // operator --
                // -----------

                /**
                 * <your documentation>
                 */
                iterator& operator -- () {
                    index--;
                    assert(valid());
                    return *this;}

                /**
                 * <your documentation>
                 */
                iterator operator -- (int) {
                    iterator x = *this;
                    --(*this);
                    assert(valid());
                    return x;}

                // -----------
                // operator +=
                // -----------

                /**
                 * <your documentation>
                 */
                iterator& operator += (difference_type d) {
                    index += d;
                    assert(valid());
                    return *this;}

                // -----------
                // operator -=
                // -----------

                /**
                 * <your documentation>
                 */
                iterator& operator -= (difference_type d) {
                    index -= d;
                    assert(valid());
                    return *this;}};

    public:
        // --------------
        // const_iterator
        // --------------

        class const_iterator {
            public:
                // --------
                // typedefs
                // --------

                typedef std::bidirectional_iterator_tag iterator_category;
                typedef typename Deque::value_type      value_type;
                typedef typename Deque::difference_type difference_type;
                typedef typename Deque::const_pointer   pointer;
                typedef typename Deque::const_reference reference;

            public:
                // -----------
                // operator ==
                // -----------

                /**
                 * <your documentation>
                 */
                friend bool operator == (const const_iterator& lhs, const const_iterator& rhs) {
                    return lhs.index == rhs.index && (&(lhs.myDeque) == &(rhs.myDeque));}

                // ----------
                // operator +
                // ----------

                /**
                 * <your documentation>
                 */
                friend const_iterator operator + (const_iterator lhs, difference_type rhs) {
                    return lhs += rhs;}

                // ----------
                // operator -
                // ----------

                /**
                 * <your documentation>
                 */
                friend const_iterator operator - (const_iterator lhs, difference_type rhs) {
                    return lhs -= rhs;}

            private:
                // ----
                // data
                // ----

                size_type index;
                const Deque& myDeque;

            private:
                // -----
                // valid
                // -----

                bool valid () {
                    return index >= 0 && myDeque.valid();}

            public:
                // -----------
                // constructor
                // -----------

                /**
                 * <your documentation>
                 */
                const_iterator (const Deque& myDeque, size_type index) : index(index), myDeque(myDeque) {
                    assert(valid());}

                // Default copy, destructor, and copy assignment.
                // const_iterator (const const_iterator&);
                // ~const_iterator ();
                // const_iterator& operator = (const const_iterator&);

                // ----------
                // operator *
                // ----------

                /**
                 * <your documentation>
                 */
                reference operator * () const {
                    return myDeque[index];}

                // -----------
                // operator ->
                // -----------

                /**
                 * <your documentation>
                 */
                pointer operator -> () const {
                    return &**this;}

                // -----------
                // operator ++
                // -----------

                /**
                 * <your documentation>
                 */
                const_iterator& operator ++ () {
                    index++;
                    assert(valid());
                    return *this;}

                /**
                 * <your documentation>
                 */
                const_iterator operator ++ (int) {
                    const_iterator x = *this;
                    ++(*this);
                    assert(valid());
                    return x;}

                // -----------
                // operator --
                // -----------

                /**
                 * <your documentation>
                 */
                const_iterator& operator -- () {
                    index--;
                    assert(valid());
                    return *this;}

                /**
                 * <your documentation>
                 */
                const_iterator operator -- (int) {
                    const_iterator x = *this;
                    --(*this);
                    assert(valid());
                    return x;}

                // -----------
                // operator +=
                // -----------

                /**
                 * <your documentation>
                 */
                const_iterator& operator += (difference_type d) {
                    index += d;
                    assert(valid());
                    return *this;}

                // -----------
                // operator -=
                // -----------

                /**
                 * <your documentation>
                 */
                const_iterator& operator -= (difference_type d) {
                    index -= d;
                    assert(valid());
                    return *this;}};


        // ------------
        // constructors
        // ------------
    private:
        void init()
        {
            numRows = 10;

            container = outer_a.allocate(numRows);// T*[numRows];
            fill(container, container+numRows, (T*)NULL); //NULL out outer container, always!
            
            //allocating first, ASSUMPTION will be row/col pointers are always within allocated space.
            container[numRows/2] = this->a.allocate(10);
            beginRow = endRow = numRows/2;
            beginCol = endCol = 5;
            
            assert(valid());
        }
    
    public:
        /**
         * <your documentation>
         */
        explicit Deque (const allocator_type& a = allocator_type()) : a(a)
        {
            init();
        }

        /**
         * <your documentation>
         */
        explicit Deque (size_type s, const_reference v = value_type(), const allocator_type& a = allocator_type()) : a(a)   
        {
            init();
            resize(s, v);
            assert(valid());
        }

        /**
         * <your documentation>
         */
        Deque (const Deque& that) {
            assert(that.valid());
            
            init();

            size_type i=0;
            while(i<that.size())           
                push_back(that[i++]);
            
            assert(valid());}

        // ----------
        // destructor
        // ----------

        /**
         * <your documentation>
         */
        ~Deque () {
            iterator it = this->begin();
            while(it != this->end())
            {
                a.destroy(&(*it));
                it++;
            }
            
            
            
            for(unsigned long i=0; i<numRows; i++)
            {
                if(container[i] != (T*)NULL)
                {
                    a.deallocate(container[i], 10);
                }
            }
            
            outer_a.deallocate(container, numRows);
            assert(valid());}

        // ----------
        // operator =
        // ----------

        /**
         * <your documentation>
         */
        Deque& operator = (const Deque& rhs) {
            //rhs >= this -> do assignment on first this->size() elements, then copy constructor for remaining lhs elements
            //rhs < this -> do assignment on first rhs.size() elements, pop off remainder of this. 

            size_type mySize = size();            
            if(rhs.size() >= size())
            {
//                for(size_type i=0; i<mySize; i++)
//                    (*this)[i] = rhs[i];
                copy(rhs.begin(), rhs.begin()+mySize, begin());
                
                for(size_type i=mySize; i<rhs.size(); i++)
                    push_back(rhs[i]);
            }
            else
            {
                copy(rhs.begin(), rhs.end(), begin());
                
                while(size() != rhs.size())
                    pop_back();
            }
            
            assert(valid());
            return *this;}

        // -----------
        // operator []
        // -----------

        /**
         * <your documentation>
         */
        reference operator [] (size_type index) {
            size_type col = (beginCol + index)%10;
            size_type row = (beginRow + ((beginCol+index)/10)) % numRows;
            
            return container[row][col];
        }

        /**
         * <your documentation>
         */
        const_reference operator [] (size_type index) const {
            return const_cast<Deque*>(this)->operator[](index);}

        // --
        // at
        // --

        /**
         * <your documentation>
         */
        reference at (size_type index) {
            if(index>=size() || index<0)
                throw std::out_of_range("Deque::at()"); 
            return (*this)[index];              
        }

        /**
         * <your documentation>
         */
        const_reference at (size_type index) const {
            return const_cast<Deque*>(this)->at(index);}

        // ----
        // back
        // ----

        /**
         * <your documentation>
         */
        reference back () {
        
            bool changeRow = endCol == 0;
            
            size_type endRowTmp = endRow;
            size_type endColTmp = (changeRow) ? 9 : (endCol - 1); //wrap around? or simple decrement
            
            if(changeRow)
                endRowTmp = (endRow == 0) ? numRows - 1 : endRow - 1;      //wrap around? or simple decrement
                        
            return container[endRowTmp][endColTmp];}

        /**
         * <your documentation>
         */
        const_reference back () const {
            return const_cast<Deque*>(this)->back();}

        // -----
        // begin
        // -----

        /**
         * <your documentation>
         */
        iterator begin () {
            return iterator(*this, 0);}

        /**
         * <your documentation>
         */
        const_iterator begin () const {
            return const_iterator(*this, 0);}

        // -----
        // clear
        // -----

        /**
         * <your documentation>
         */
        void clear () {
            unsigned long mysize = size();
            
            for(unsigned long i = 0; i < mysize; i++)
            {
                pop_back();
            }
            
            assert(valid());}

        // -----
        // empty
        // -----

        /**
         * <your documentation>
         */
        bool empty () const {
            return !size();}

        // ---
        // end
        // ---

        /**
         * <your documentation>
         */
        iterator end () {
            return iterator(*this, size());}

        /**
         * <your documentation>
         */
        const_iterator end () const {
            return const_iterator(*this, size());}

        // -----
        // erase
        // -----

        /**
         * <your documentation>
         */
        iterator erase (iterator it) {
            copy(it + 1, end(), it);
            
            pop_back();
            assert(valid());
            return it;}

        // -----
        // front
        // -----

        /**
         * <your documentation>
         */
        reference front () {
            return container[beginRow][beginCol];            
        }

        /**
         * <your documentation>
         */
        const_reference front () const {
            return const_cast<Deque*>(this)->front();}

        // ------
        // insert
        // ------

        /**
         * <your documentation>
         */
        iterator insert (iterator it , const_reference value) {
            //moving the last element over one, takes care of resize, cursors, etc
            iterator endIt = end() - 1;

            push_back(back());
            
            while(endIt != it)
            {
                *endIt = *(endIt - 1);
                endIt--;
            }
            
            *(it) = value;
            
            //move stuff at the insert and the stuff after it back further
            assert(valid());

            return it;}

        // ---
        // pop
        // ---

        /**
         * <your documentation>
         */
        void pop_back () {
            //update pointers/cursors
            if(endCol == 0)
                endRow = (endRow == 0) ? numRows - 1 : endRow - 1;
            endCol = (endCol == 0) ? 9 : endCol - 1;
                
            //destroy
            a.destroy(&container[endRow][endCol]);
            assert(valid());}

        /**
         * <your documentation>
         */
        void pop_front () {
            //destroy
            a.destroy(&container[beginRow][beginCol]);
            
            //update pointers/cursors
            beginCol = (beginCol + 1) % 10;
            if(beginCol == 0)
                beginRow = (beginRow + 1) % numRows;
            assert(valid());}

        // ---------------
        // double capacity
        // ---------------

        private:
        /**
         * determine new row ends
         * make new container
         * copy old row pointers
         * update row ends w/ new values
         * delete old container, wire it up to new bigger container
         */
        void double_capacity()
        {
            assert(beginRow != endRow);
            
            unsigned long newNumRows = numRows*2;
            unsigned long newBeginRow = newNumRows/2 - (numRows/2);
            unsigned long newEndRow   = newBeginRow + numRows - 1;
            

            T** containerTmp = outer_a.allocate(newNumRows);//new T*[newNumRows];
            fill(containerTmp, containerTmp+newNumRows, (T*)NULL); //NULL out outer new container, always!
            
            if(beginRow < endRow)
            {
                copy(&container[beginRow], &container[endRow], &containerTmp[newBeginRow]);
            }
            else  //begin > end
            {
                copy(&container[beginRow], &container[numRows], &containerTmp[newBeginRow]);
                
                //TODO, is endRow+1 right when endCol = 0? (end row is a row by itself... not sure if its even allocated)
                copy(&container[0], &container[endRow+1], &containerTmp[newBeginRow + (numRows - beginRow)]);
            }
                        
            numRows = newNumRows;
            beginRow = newBeginRow;
            endRow   = newEndRow;
            // no need to update column end pointers. they aren't changed

            outer_a.deallocate(container, newNumRows/2);
            container = containerTmp;
        }

        // ----
        // push
        // ----

        void push_back_update_cursors_and_capacity()
        {
            size_type endRowTmp = endRow, endColTmp = endCol;

            endColTmp = (endColTmp + 1) %10;
            if(endColTmp == 0) //jump to next row
            {
                endRowTmp = (endRowTmp + 1) % numRows; //handles potential wrap around
                
                if(endRowTmp == beginRow) // do resize?
                {
                    double_capacity();
                    push_back_update_cursors_and_capacity(); //start over now that we have the space
                    return; // don't let the rest of this method execute, assumptions invalidated by resize.
                }
                else if(container[endRowTmp] == NULL)
                {
                    // allows assumption that rowend  colend is always allocated in advance
                    container[endRowTmp] = a.allocate(10);
                }
            }
            
            endRow = endRowTmp;
            endCol = endColTmp;
        }

        void push_front_update_cursors_and_capacity()
        {
            size_type beginRowTmp = beginRow, beginColTmp = beginCol;

            //decrement beginnings
            if(beginColTmp == 0) //looping back
            {
                beginColTmp = 9;
                                            
                if(beginRowTmp == 0)
                    beginRowTmp = numRows-1;
                else
                    beginRowTmp--;
            
                if(beginRowTmp == endRow) //do resize?
                {                
                    double_capacity();
                    push_front_update_cursors_and_capacity(); //start over now that we have the space
                    return; // don't let the rest of this method execute, assumptions invalidated by resize.
                }    
                else if(container[beginRowTmp] == NULL) // do allocation?
                {
                    container[beginRowTmp] = a.allocate(10);
                }
            }
            else
            {
                beginColTmp--;
            }
            
            //final new values assigned
            beginRow = beginRowTmp;
            beginCol = beginColTmp;
        }
        
        public:


        /**
         * <your documentation>
         */
        void push_back (const_reference item) {
            // assume that rowend  colend is always allocated in advance
            assert(container[endRow] != (T*)NULL);
            
            // go ahead and do the push at the current cursor end
            a.construct(&container[endRow][endCol], item);
            
            // update them to their post push states (potentially doing allocation and even resize)
            push_back_update_cursors_and_capacity();
            
            assert(valid());}
        


        /**
         * <your documentation>
         */
        void push_front (const_reference item) 
        {
            push_front_update_cursors_and_capacity();            
            
            // PUSH!
            a.construct(&container[beginRow][beginCol], item);
            
            assert(valid());
        }

        // ------
        // resize
        // ------

        /**
         * <your documentation>
         */
        void resize (size_type s, const_reference v = value_type()) {
            size_type mysize = size();
        
            if(s > mysize)    //grow
            {
                for(; mysize < s; mysize++)
                    push_back(v);
            }
            else            //shrink
            {
                for(; mysize > s; mysize--)
                    pop_back();
            }
            assert(valid());}

        // ----
        // size
        // ----

        /**
         * <your documentation>
         */
        size_type size () const {
        unsigned long size = 0;
            if(endRow > beginRow){
                size = (endRow - beginRow - 1) * 10;
                size += endCol;
                size += 10 - beginCol;
            }
            else if(endRow < beginRow){
                size += 10*(endRow-1);
                size += endCol;
                size += 10 - beginCol;
                size += 10*(numRows - beginRow);
            }
            else { //when they are pointing to the same row
                size = endCol - beginCol;
            }
            return size;}

        // ----
        // swap
        // ----

        /**
         * <your documentation>
         */
        void swap (Deque& that) {
            std::swap(beginRow, that.beginRow);
            std::swap(endRow, that.endRow);
            std::swap(beginCol, that.beginCol);
            std::swap(endCol, that.endCol);
            std::swap(numRows, that.numRows);
            std::swap(container, that.container);
                        
            assert(valid());}};

#endif // Deque_h
