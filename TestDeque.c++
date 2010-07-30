// ----------------------------
// projects/deque/TestDeque.c++
// Copyright (C) 2010
// Glenn P. Downing
// ----------------------------

/*
To test the program:
    % g++ -ansi -pedantic -lcppunit -ldl -Wall TestDeque.c++ -o TestDeque.app
    % valgrind TestDeque.app >& TestDeque.out
*/

// --------
// includes
// --------

#include <algorithm> // copy, count, fill, reverse
#include <deque>     // deque
#include <memory>    // allocator
#include <cstring>   // strcmp

#include "cppunit/extensions/HelperMacros.h" // CPPUNIT_TEST, CPPUNIT_TEST_SUITE, CPPUNIT_TEST_SUITE_END
#include "cppunit/TestFixture.h"             // TestFixture
#include "cppunit/TestSuite.h"               // TestSuite
#include "cppunit/TextTestRunner.h"          // TestRunner

#include "Deque.h"

// ---------
// TestDeque
// ---------

template <typename C>
struct TestDeque : CppUnit::TestFixture {

    void test_special_cases() {
        {
            C x(10, 2); 
            C y = x;

//            x = x; //assignment on self
            CPPUNIT_ASSERT(x == y);
        }

        {
            C x(10, 2);
            C y = x;

  //          x.swap(x); //swapping with self

            CPPUNIT_ASSERT(x == y);
        }
    }

    // ----------------
    // test_constructor
    // ----------------

    void test_constructor () {
        const C y(10);
        for(int i=0; i<10; i++)
            CPPUNIT_ASSERT(y.at(i) == 0);
        
        const C z(10, 2);
        for(int i=0; i<10; i++)
            CPPUNIT_ASSERT(z.at(i) == 2);
        
        const C t = z;
        for(int i=0; i<10; i++)
            CPPUNIT_ASSERT(t.at(i) == 2);

        CPPUNIT_ASSERT(t.size() == 10 && z.size() == 10 && y.size() == 10);
    }

    // -------------
    // test_equality
    // -------------

    void test_equality () {
        const C x(10, 2);
        const C y(10, 2);
        const C z(10, 3);
        const C a(11, 2);
        

        CPPUNIT_ASSERT(x == y);
        
        //TODO
        //CPPUNIT_ASSERT((x != z));
        //CPPUNIT_ASSERT((x != a));
        
        CPPUNIT_ASSERT(!(x == z));
        CPPUNIT_ASSERT(!(x == a));
        }

    // ---------------
    // test_comparison
    // ---------------

    void test_comparison () {
        const C x(10, 2);
        const C y(20, 3);
        assert(x < y);
        assert(!(x >= y));
        assert(y > x);
        assert(!(y <= x));}

    // ---------------
    // test_assignment
    // ---------------

    void test_assignment () {
        
              C x(10, 2);
        const C y(20, 3);
        x = y; //grow
        CPPUNIT_ASSERT(x==y);    
        
        C b(10, 2);
        C a(20, 3);
        a = b; //shrink
        CPPUNIT_ASSERT(a==b);
        
        //equal
        C c(10, 3);
        C d(10, 4);
        c = d;
        CPPUNIT_ASSERT(c==d);
    }

    // --------------
    // test_subscript
    // --------------

    void test_subscript_1() {
        C x;
        
        CPPUNIT_ASSERT(x.size() == 0);
        
        unsigned long end = 95;

        // LOADING VALUES IN
        // Will get the deque 1 away from needing to resize
        for(unsigned long i = 0; i < end; i++)
        {
            x.push_front(i);
        }
        //x.info();
        
        // CHECKING AT BEFORE RESIZE
        for(int i=0; i<95; i++)
        {
            CPPUNIT_ASSERT(x[i] == 94-i);        
        }
        CPPUNIT_ASSERT(x.size() == end);
        CPPUNIT_ASSERT(x.front() == (int)(end-1));
        
        
        // Will cause resize!
        x.push_front(95);
        //x.info();
        
        // CHECKING AT AFTER RESIZE
        CPPUNIT_ASSERT(x.size() == 96);
        for(int i=0; i<96; i++)
        {
            CPPUNIT_ASSERT(x[i] == 95-i);        
        }
    }
    
    // -------
    // test_at
    // -------

    void test_at_1() {
        C x;
        
        CPPUNIT_ASSERT(x.size() == 0);
        
        unsigned long end = 95;

        // LOADING VALUES IN
        // Will get the deque 1 away from needing to resize
        for(unsigned long i = 0; i < end; i++)
        {
            x.push_front(i);
        }
        //x.info();
        
        // CHECKING AT BEFORE RESIZE
        for(int i=0; i<95; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 94-i);        
        }
        CPPUNIT_ASSERT(x.size() == end);
        CPPUNIT_ASSERT(x.front() == (int)(end-1));
        
        
        // Will cause resize!
        x.push_front(95);
        //x.info();
        
        // CHECKING AT AFTER RESIZE
        CPPUNIT_ASSERT(x.size() == 96);
        for(int i=0; i<96; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 95-i);        
        }
    }
    
    void test_at_2() {
        C x;
        
        x.push_front(1);
        
        try
        {
            x.at(1);
            CPPUNIT_ASSERT(false);
        }
        catch(std::out_of_range& e)
        {
            CPPUNIT_ASSERT(true);
        }
    }

    // ---------
    // test_back
    // ---------

    void test_back () {
        C x;
        int end = 100;
        for(int i = 0; i < end; i++)
        {
            x.push_back(i);
            CPPUNIT_ASSERT((x.back() == i) && (x.size() == (unsigned long)(i + 1)));
        }
    }

    // ----------
    // test_begin
    // ----------

    void test_begin () {
              C x(10, 2);
        const C y(10, 2);
        typename C::iterator       p = x.begin();
        typename C::const_iterator q = y.begin();
        assert(*p == *q);}

    // ----------
    // test_clear
    // ----------

    void test_clear () {
        C x(10, 2);
        x.clear();
        assert(x.empty());}

    // ----------
    // test_empty
    // ----------

    void test_empty () {
        const C    x;
        const bool b = x.empty();
        assert(b);}

    // --------
    // test_end
    // --------

    void test_end () {
              C x(10, 2);
        const C y(10, 2);
        typename C::iterator       p = x.end()-1;
        typename C::const_iterator q = y.end()-1;
        assert(*p == *q);}

    // ----------
    // test_erase
    // ----------

    void test_erase () {
        {
        C                    x(10, 2);
        typename C::iterator p = x.erase(x.begin());
        assert(p == x.begin());
        CPPUNIT_ASSERT(x.size() == 9);
        }
        
        {
        C a;
        for(int i = 0; i < 80; i++)
        {
            a.push_back(i);
        }
        
        a.erase(a.begin());
        CPPUNIT_ASSERT(a.front() == 1);
        CPPUNIT_ASSERT(a.size() == 79);

        a.erase(a.end() - 1);
        CPPUNIT_ASSERT(a.back() == 78);
        CPPUNIT_ASSERT(a.size() == 78);
        
        a.erase(a.begin() + 30);
        CPPUNIT_ASSERT(*(a.begin() + 30) == 32);
        CPPUNIT_ASSERT(a.size() == 77);
        a.insert(a.begin() + 30, 31);
        a.insert(a.begin(), 0);
        a.push_back(79);
        
        CPPUNIT_ASSERT(a.size() == 80);
        for(int i = 0; i < 80; i++)
        {        
            CPPUNIT_ASSERT(a[i] == i);
        } 
        }
        }

    // ----------
    // test_front
    // ----------

    void test_front () {
              C x(10, 2);
        const C y(10, 2);
        typename C::reference       v = x.front();
        typename C::const_reference w = y.front();
        assert(v == w);}

    // -----------
    // test_insert
    // -----------

    void test_insert () {
        C x;
        for(double i = 0; i < 94; i++) //one less than resize
        {
            x.push_back(i);
        }
        
        typename C::iterator p = x.insert(x.begin() + 1, 3);
        assert(p == x.begin() + 1);
        CPPUNIT_ASSERT(*p == 3);
        CPPUNIT_ASSERT(x.size() == 95);
        CPPUNIT_ASSERT(x[0] == 0);
        CPPUNIT_ASSERT(x[1] == 3);
        
        for(int i = 2; i < (int)x.size(); i++)
        {
            CPPUNIT_ASSERT(x[i] == i - 1);
        }
        }
        
    void test_insert_1 () {
        C x;
        for(double i = 0; i < 80; i++) //one less than resize
        {
            x.push_back(i);
        }
        
        typename C::iterator p = x.insert(x.begin() + 1, 3);
        assert(p == x.begin() + 1);
        CPPUNIT_ASSERT(*p == 3);
        CPPUNIT_ASSERT(x.size() == 81);
        CPPUNIT_ASSERT(x[0] == 0);
        CPPUNIT_ASSERT(x[1] == 3);
        
        for(int i = 2; i < (int)x.size(); i++)
        {
            CPPUNIT_ASSERT(x[i] == i - 1);
        }}

    // -------------
    // test_pop_back
    // -------------

    void test_pop_back_1 () {
        C x;
        
        int end = 1000;
        for(int i = 0; i < end; i++)
        {
            x.push_front(i);
        }
        
        for(int i = 0; i < end; i++)
        {
            CPPUNIT_ASSERT(x.back() == i);
            CPPUNIT_ASSERT(x.size() == (unsigned long)(end - i));
            x.pop_back();
            CPPUNIT_ASSERT(x.size() == (unsigned long)(end - i - 1));
        }
    }
    
    void test_pop_back_2 () 
    {
        C x;

        int end = 90; 
        for(int i = 0; i < end; i++)
        {
            x.push_back(i);
        }
        
        //x.info();
        //end is above the beginning
        
        for(int i = end-1; i >= 0; i--)
        {
            CPPUNIT_ASSERT(x.back() == i);
            CPPUNIT_ASSERT(x.size() == (unsigned long)(i+1));
            x.pop_back();
            //x.info();
            CPPUNIT_ASSERT(x.size() == (unsigned long)(i));
        }
    }    

    // --------------
    // test_push_back
    // --------------

    void test_push_back_1 () {
        C x;
        for(int i=1; i<=5; i++)
            x.push_back(i);
        //x.info(); //before pushing to next row. 
        
        x.push_back(6); //next rows element
        //x.info();
        
        CPPUNIT_ASSERT(x.size() == 6);
        
        for(int i=0; i<6; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == i+1);
        }        
    }
    
    void test_push_back_2 () {
        C x;
        for(int i=1; i<=94; i++) // ONE away from resize
            x.push_back(i);
        //x.info(); 
        CPPUNIT_ASSERT(x.size() == 94);
        
        for(int i=0; i<94; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == i+1);
        }    
        
        x.push_back(95); //double capacity!
        //x.info();
        
        CPPUNIT_ASSERT(x.size() == 95);
        
        for(int i=0; i<95; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == i+1);
        }        
    }
    
    void test_push_back_stress () 
    {
        C x;
        
        CPPUNIT_ASSERT(x.size() == 0);
        
        int end = 1596; // will cause 5 resizes.
        for(int i = 0; i < end; i++)
        {
            x.push_back(i);
        }
        
        for(int i = 0; i < end; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == i);
        }
    
        CPPUNIT_ASSERT(x.size() == (unsigned long)end);
    }    


    // --------------
    // test_push_front
    // --------------

    void test_push_front_1 () {
        C x;
        //x.info();
        CPPUNIT_ASSERT(x.size() == 0);

        //will cause it to go up 2 rows, having to do allocation and move beginCol and beginRow correctly
        for(int i=0; i<16; i++)
            x.push_front(i);
        
        //x.info();
        CPPUNIT_ASSERT(x.size() == 16);
        CPPUNIT_ASSERT(x.front() == 15);
        
    }
    
    void test_push_front_2 () {
        C x;
        
        CPPUNIT_ASSERT(x.size() == 0);
        
        unsigned long end = 95;
        // Will get the deque 1 away from needing to resize
        for(unsigned long i = 0; i < end; i++)
        {
            x.push_front(i);
        }
        //x.info();
        CPPUNIT_ASSERT(x.size() == end);
        CPPUNIT_ASSERT(x.front() == (int)(end-1));
        
        // Will cause resize!
        x.push_front(95);
        //x.info();
        CPPUNIT_ASSERT(x.size() == 96);
        CPPUNIT_ASSERT(x.front() == 95);
    }

    void test_push_front_stress () 
    {
        C x;
        
        CPPUNIT_ASSERT(x.size() == 0);
        
        int end = 1596; // will cause 5 resizes.
        for(int i = 0; i < end; i++)
        {
            x.push_front(i);
        }
    
        CPPUNIT_ASSERT(x.size() == (unsigned long)end);
        CPPUNIT_ASSERT(x.front() == (end-1));
    }

    // -----------
    // test_resize
    // -----------

    void test_resize () {
        C x;

        //grow
        x.resize(20);
        CPPUNIT_ASSERT(x.size() == 20);
        x.resize(30, 3);
        CPPUNIT_ASSERT(x.size() == 30);
        
        for(int i = 0; i < 20; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 0);
        }
        
        for(int i = 20; i < 30; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 3);
        }
        
        //same size
        x.resize(30, 2);
        CPPUNIT_ASSERT(x.size() == 30);
        
        for(int i = 0; i < 20; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 0);
        }
        
        for(int i = 20; i < 30; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 3);
        }
        
        //shrink
        x.resize(20);
        CPPUNIT_ASSERT(x.size() == 20);
        
        for(int i = 0; i < 20; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 0);
        }
 
        //shrink to zero
        x.resize(0);
        CPPUNIT_ASSERT(x.size() == 0);
        }

    // ---------
    // test_size
    // ---------

    void test_size () {
        const C x;
        assert(x.size() == 0);}

    // ---------
    // test_swap
    // ---------

    void test_swap () {
        C x(20, 3);
        C y(30, 4);
        
        x.swap(y);
        
        CPPUNIT_ASSERT(x.size() == (unsigned long)30);
        CPPUNIT_ASSERT(y.size() == (unsigned long)20);
        for(int i=0; i<30; i++)
        {
            CPPUNIT_ASSERT(x.at(i) == 4);
            if(i<20)
                CPPUNIT_ASSERT(y.at(i) == 3);
        }        
    }

    // -------------
    // test_iterator
    // -------------

    void test_iterator () {
        C x(10, 2);
        typename C::iterator  b = x.begin();
        assert(b == x.begin());
        typename C::reference v = *b;
        ++b;
        b += 2;
        --b;
        b -= 2;
        typename C::reference w = *b;
        assert(v == w);}
        
    void test_iterator_1 () {
        C x;
        for(int i = 0; i < 80; i++)
        {
            x.push_back(i);
        }
        
        typename C::iterator  b = x.begin();
        CPPUNIT_ASSERT(b == x.begin());
        typename C::iterator  l = b;
        CPPUNIT_ASSERT(b == x.begin());
        
        int j = 0;
        while(b != x.end())
        {
            CPPUNIT_ASSERT(*b == j);
            b++;
            j++;
        }
        
        while(b != x.begin())
        {
            j--;
            b--;
            CPPUNIT_ASSERT(*b == j);
        }
        
        while(b != x.end())
        {
            *b = 2;
            b++;
        }        

        C y(80, 2);
        CPPUNIT_ASSERT(x == y);
        }

    // -------------------
    // test_const_iterator
    // -------------------

    void test_const_iterator () {
        const C x(10, 2);
        typename C::const_iterator  b = x.begin();
        assert(b == x.begin());
        typename C::const_reference v = *b;
        ++b;
        b += 2;
        --b;
        b -= 2;
        typename C::const_reference w = *b;
        assert(v == w);}
        
    void test_const_iterator_1 () {
        C f;
        for(int i = 0; i < 80; i++)
        {
            f.push_back(i);
        }
        const C x = f;
        
        typename C::const_iterator  b = x.begin();
        typename C::const_iterator  l = b;
        CPPUNIT_ASSERT(b == x.begin());
        CPPUNIT_ASSERT(l == b);
        
        int j = 0;
        while(b != x.end())
        {
            CPPUNIT_ASSERT(*b == j);
            b++;
            j++;
        }
        
        while(b != x.begin())
        {
            b--;
            j--;
            CPPUNIT_ASSERT(*b == j);
        }

        }

    // ---------------
    // test_algorithms
    // ---------------

    void test_algorithms () {
              C x(10, 4);
        const C y(10, 2);
        CPPUNIT_ASSERT(std::count(y.begin(), y.end(), 3) == 0);
        CPPUNIT_ASSERT(std::count(y.begin(), y.end(), 2) == 10);        
        std::copy(y.begin(), y.end(), x.begin());
        CPPUNIT_ASSERT(std::count(x.begin(), x.end(), 2) == 10);                
        std::fill(x.begin(), x.end(), 4);
        CPPUNIT_ASSERT(std::count(x.begin(), x.end(), 4) == 10);
        x.insert(x.begin(), 0);
        CPPUNIT_ASSERT(x.front() == 0 && x.back() == 4);        
        std::reverse(x.begin(), x.end());
        CPPUNIT_ASSERT(x.front() == 4 && x.back() == 0);
        
   }
   
    void test_destruction() 
    {
        vector<int> v(10, 3);
        Deque<vector<int> > a(10, v);             
    }

    // -----
    // suite
    // -----

    CPPUNIT_TEST_SUITE(TestDeque);
    CPPUNIT_TEST(test_special_cases);
    CPPUNIT_TEST(test_constructor);
    CPPUNIT_TEST(test_equality);
    CPPUNIT_TEST(test_comparison);
    CPPUNIT_TEST(test_assignment);
    CPPUNIT_TEST(test_subscript_1);
    CPPUNIT_TEST(test_at_1);
    CPPUNIT_TEST(test_at_2);
    CPPUNIT_TEST(test_back);
    CPPUNIT_TEST(test_begin);
    CPPUNIT_TEST(test_clear);
    CPPUNIT_TEST(test_empty);
    CPPUNIT_TEST(test_end);
    CPPUNIT_TEST(test_erase);
    CPPUNIT_TEST(test_front);
    CPPUNIT_TEST(test_insert);
    CPPUNIT_TEST(test_insert_1);
    CPPUNIT_TEST(test_pop_back_1);
    CPPUNIT_TEST(test_pop_back_2);    
    CPPUNIT_TEST(test_push_back_1);
    CPPUNIT_TEST(test_push_back_2);
    CPPUNIT_TEST(test_push_back_stress);    
    CPPUNIT_TEST(test_push_front_1);
    CPPUNIT_TEST(test_push_front_2);
    CPPUNIT_TEST(test_push_front_stress);
    CPPUNIT_TEST(test_resize);
    CPPUNIT_TEST(test_size);
    CPPUNIT_TEST(test_swap);
    CPPUNIT_TEST(test_iterator);
    CPPUNIT_TEST(test_iterator_1);
    CPPUNIT_TEST(test_const_iterator);
    CPPUNIT_TEST(test_const_iterator_1);
    CPPUNIT_TEST(test_algorithms);
    CPPUNIT_TEST(test_destruction);
    CPPUNIT_TEST_SUITE_END();};

// ----
// main
// ----

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);  // turn off synchronization with C I/O
    cout << "TestDeque.c++" << endl;

    CppUnit::TextTestRunner tr;
    //tr.addTest(TestDeque< std::deque<int>                       >::suite());
    //tr.addTest(TestDeque< std::deque<int, std::allocator<int> > >::suite());
    tr.addTest(TestDeque<      Deque<int>                       >::suite());
    //tr.addTest(TestDeque<      Deque<int, std::allocator<int> > >::suite());
    tr.run();

    cout << "Done." << endl;
    return 0;}
