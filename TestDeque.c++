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
    // ----------------
    // test_constructor
    // ----------------

    void test_constructor () {
        const C x;
        const C y(10);
        const C z(10, 2);
        const C t = z;}

    // -------------
    // test_equality
    // -------------

    void test_equality () {
        const C x(10, 2);
        const C y(10, 2);
        assert(x == y);
        assert(!(x != y));}

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
        x = y;}

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
    
    void test_subscript_2() {
        C x;
        
        x.push_front(1);
        
        try
        {
            int y = x[-1];
            cout<<"********!!!"<<y<<endl;
        }
        catch(std::out_of_range& e)
        {
            CPPUNIT_ASSERT(false);
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
              C x(10, 2);
        const C y(10, 2);
        typename C::reference       v = x.back();
        typename C::const_reference w = y.back();
        assert(v == w);}

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
        typename C::iterator       p = x.end();
        typename C::const_iterator q = y.end();
        assert(*p == *q);}

    // ----------
    // test_erase
    // ----------

    void test_erase () {
        C                    x(10, 2);
        typename C::iterator p = x.erase(x.begin());
        assert(p == x.begin());}

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
        C                    x(10, 2);
        typename C::iterator p = x.insert(x.begin(), 3);
        assert(p == x.begin());}

    // -------------
    // test_pop_back
    // -------------

    void test_pop_back () {
        C x(10, 2);
        x.pop_back();}

    // --------------
    // test_push_back
    // --------------

    void test_push_back () {
        C x(10, 2);
        x.push_back(3);}

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
        C x(10, 2);
        x.resize(20);
        x.resize(30, 3);}

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
        C x(10, 2);
        C y(20, 3);
        x.swap(y);}

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

    // ---------------
    // test_algorithms
    // ---------------

    void test_algorithms () {
              C x(10, 2);
        const C y(10, 2);
        assert(std::count(y.begin(), y.end(), 3) == 0);
        std::copy(y.begin(), y.end(), x.begin());
        std::fill(x.begin(), x.end(), 2);
        std::reverse(x.begin(), x.end());}

    // -----
    // suite
    // -----

    CPPUNIT_TEST_SUITE(TestDeque);
//    CPPUNIT_TEST(test_constructor);
//    CPPUNIT_TEST(test_equality);
//    CPPUNIT_TEST(test_comparison);
//    CPPUNIT_TEST(test_assignment);
    CPPUNIT_TEST(test_subscript_1);
//    CPPUNIT_TEST(test_subscript_2); //TODO behavior questions
    CPPUNIT_TEST(test_at_1);
    CPPUNIT_TEST(test_at_2);
//    CPPUNIT_TEST(test_back);
//    CPPUNIT_TEST(test_begin);
//    CPPUNIT_TEST(test_clear);
//    CPPUNIT_TEST(test_empty);
//    CPPUNIT_TEST(test_end);
//    CPPUNIT_TEST(test_erase);
//    CPPUNIT_TEST(test_front);
//    CPPUNIT_TEST(test_insert);
//    CPPUNIT_TEST(test_pop_back);
//    CPPUNIT_TEST(test_push_back);
    CPPUNIT_TEST(test_push_front_1);
    CPPUNIT_TEST(test_push_front_2);
    CPPUNIT_TEST(test_push_front_stress);
//    CPPUNIT_TEST(test_resize);
//    CPPUNIT_TEST(test_size);
//    CPPUNIT_TEST(test_swap);
//    CPPUNIT_TEST(test_iterator);
//    CPPUNIT_TEST(test_const_iterator);
//    CPPUNIT_TEST(test_algorithms);
    CPPUNIT_TEST_SUITE_END();};

// ----
// main
// ----

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);  // turn off synchronization with C I/O
    cout << "TestDeque.c++" << endl;

    CppUnit::TextTestRunner tr;
    tr.addTest(TestDeque< std::deque<int>                       >::suite());
    tr.addTest(TestDeque< std::deque<int, std::allocator<int> > >::suite());
    tr.addTest(TestDeque<      Deque<int>                       >::suite());
    tr.addTest(TestDeque<      Deque<int, std::allocator<int> > >::suite());
    tr.run();

    cout << "Done." << endl;
    return 0;}
