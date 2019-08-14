#pragma once


template <uint_fast8_t exp_bits, uint_fast8_t frac_bits>
struct BackendType {
  // Default: no type
};


template <>
struct BackendType<1,1> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,2> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,3> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,4> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,5> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,6> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,7> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,8> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,9> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,10> {
    typedef float16 FloatType;
};


template <>
struct BackendType<1,11> {
    typedef float FloatType;
};


template <>
struct BackendType<1,12> {
    typedef float FloatType;
};


template <>
struct BackendType<1,13> {
    typedef float FloatType;
};


template <>
struct BackendType<1,14> {
    typedef float FloatType;
};


template <>
struct BackendType<1,15> {
    typedef float FloatType;
};


template <>
struct BackendType<1,16> {
    typedef float FloatType;
};


template <>
struct BackendType<1,17> {
    typedef float FloatType;
};


template <>
struct BackendType<1,18> {
    typedef float FloatType;
};


template <>
struct BackendType<1,19> {
    typedef float FloatType;
};


template <>
struct BackendType<1,20> {
    typedef float FloatType;
};


template <>
struct BackendType<1,21> {
    typedef float FloatType;
};


template <>
struct BackendType<1,22> {
    typedef float FloatType;
};


template <>
struct BackendType<1,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<1,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<1,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<2,1> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,2> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,3> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,4> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,5> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,6> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,7> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,8> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,9> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,10> {
    typedef float16 FloatType;
};


template <>
struct BackendType<2,11> {
    typedef float FloatType;
};


template <>
struct BackendType<2,12> {
    typedef float FloatType;
};


template <>
struct BackendType<2,13> {
    typedef float FloatType;
};


template <>
struct BackendType<2,14> {
    typedef float FloatType;
};


template <>
struct BackendType<2,15> {
    typedef float FloatType;
};


template <>
struct BackendType<2,16> {
    typedef float FloatType;
};


template <>
struct BackendType<2,17> {
    typedef float FloatType;
};


template <>
struct BackendType<2,18> {
    typedef float FloatType;
};


template <>
struct BackendType<2,19> {
    typedef float FloatType;
};


template <>
struct BackendType<2,20> {
    typedef float FloatType;
};


template <>
struct BackendType<2,21> {
    typedef float FloatType;
};


template <>
struct BackendType<2,22> {
    typedef float FloatType;
};


template <>
struct BackendType<2,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<2,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<2,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<3,1> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,2> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,3> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,4> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,5> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,6> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,7> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,8> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,9> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,10> {
    typedef float16 FloatType;
};


template <>
struct BackendType<3,11> {
    typedef float FloatType;
};


template <>
struct BackendType<3,12> {
    typedef float FloatType;
};


template <>
struct BackendType<3,13> {
    typedef float FloatType;
};


template <>
struct BackendType<3,14> {
    typedef float FloatType;
};


template <>
struct BackendType<3,15> {
    typedef float FloatType;
};


template <>
struct BackendType<3,16> {
    typedef float FloatType;
};


template <>
struct BackendType<3,17> {
    typedef float FloatType;
};


template <>
struct BackendType<3,18> {
    typedef float FloatType;
};


template <>
struct BackendType<3,19> {
    typedef float FloatType;
};


template <>
struct BackendType<3,20> {
    typedef float FloatType;
};


template <>
struct BackendType<3,21> {
    typedef float FloatType;
};


template <>
struct BackendType<3,22> {
    typedef float FloatType;
};


template <>
struct BackendType<3,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<3,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<3,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<4,1> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,2> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,3> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,4> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,5> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,6> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,7> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,8> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,9> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,10> {
    typedef float16 FloatType;
};


template <>
struct BackendType<4,11> {
    typedef float FloatType;
};


template <>
struct BackendType<4,12> {
    typedef float FloatType;
};


template <>
struct BackendType<4,13> {
    typedef float FloatType;
};


template <>
struct BackendType<4,14> {
    typedef float FloatType;
};


template <>
struct BackendType<4,15> {
    typedef float FloatType;
};


template <>
struct BackendType<4,16> {
    typedef float FloatType;
};


template <>
struct BackendType<4,17> {
    typedef float FloatType;
};


template <>
struct BackendType<4,18> {
    typedef float FloatType;
};


template <>
struct BackendType<4,19> {
    typedef float FloatType;
};


template <>
struct BackendType<4,20> {
    typedef float FloatType;
};


template <>
struct BackendType<4,21> {
    typedef float FloatType;
};


template <>
struct BackendType<4,22> {
    typedef float FloatType;
};


template <>
struct BackendType<4,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<4,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<4,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<5,1> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,2> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,3> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,4> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,5> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,6> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,7> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,8> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,9> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,10> {
    typedef float16 FloatType;
};


template <>
struct BackendType<5,11> {
    typedef float FloatType;
};


template <>
struct BackendType<5,12> {
    typedef float FloatType;
};


template <>
struct BackendType<5,13> {
    typedef float FloatType;
};


template <>
struct BackendType<5,14> {
    typedef float FloatType;
};


template <>
struct BackendType<5,15> {
    typedef float FloatType;
};


template <>
struct BackendType<5,16> {
    typedef float FloatType;
};


template <>
struct BackendType<5,17> {
    typedef float FloatType;
};


template <>
struct BackendType<5,18> {
    typedef float FloatType;
};


template <>
struct BackendType<5,19> {
    typedef float FloatType;
};


template <>
struct BackendType<5,20> {
    typedef float FloatType;
};


template <>
struct BackendType<5,21> {
    typedef float FloatType;
};


template <>
struct BackendType<5,22> {
    typedef float FloatType;
};


template <>
struct BackendType<5,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<5,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<5,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<6,1> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,2> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,3> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,4> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,5> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,6> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,7> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<6,8> {
    typedef float FloatType;
};


template <>
struct BackendType<6,9> {
    typedef float FloatType;
};


template <>
struct BackendType<6,10> {
    typedef float FloatType;
};


template <>
struct BackendType<6,11> {
    typedef float FloatType;
};


template <>
struct BackendType<6,12> {
    typedef float FloatType;
};


template <>
struct BackendType<6,13> {
    typedef float FloatType;
};


template <>
struct BackendType<6,14> {
    typedef float FloatType;
};


template <>
struct BackendType<6,15> {
    typedef float FloatType;
};


template <>
struct BackendType<6,16> {
    typedef float FloatType;
};


template <>
struct BackendType<6,17> {
    typedef float FloatType;
};


template <>
struct BackendType<6,18> {
    typedef float FloatType;
};


template <>
struct BackendType<6,19> {
    typedef float FloatType;
};


template <>
struct BackendType<6,20> {
    typedef float FloatType;
};


template <>
struct BackendType<6,21> {
    typedef float FloatType;
};


template <>
struct BackendType<6,22> {
    typedef float FloatType;
};


template <>
struct BackendType<6,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<6,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<6,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<7,1> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,2> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,3> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,4> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,5> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,6> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,7> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<7,8> {
    typedef float FloatType;
};


template <>
struct BackendType<7,9> {
    typedef float FloatType;
};


template <>
struct BackendType<7,10> {
    typedef float FloatType;
};


template <>
struct BackendType<7,11> {
    typedef float FloatType;
};


template <>
struct BackendType<7,12> {
    typedef float FloatType;
};


template <>
struct BackendType<7,13> {
    typedef float FloatType;
};


template <>
struct BackendType<7,14> {
    typedef float FloatType;
};


template <>
struct BackendType<7,15> {
    typedef float FloatType;
};


template <>
struct BackendType<7,16> {
    typedef float FloatType;
};


template <>
struct BackendType<7,17> {
    typedef float FloatType;
};


template <>
struct BackendType<7,18> {
    typedef float FloatType;
};


template <>
struct BackendType<7,19> {
    typedef float FloatType;
};


template <>
struct BackendType<7,20> {
    typedef float FloatType;
};


template <>
struct BackendType<7,21> {
    typedef float FloatType;
};


template <>
struct BackendType<7,22> {
    typedef float FloatType;
};


template <>
struct BackendType<7,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<7,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<7,52> {
    typedef double FloatType;
};
#endif


template <>
struct BackendType<8,1> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,2> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,3> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,4> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,5> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,6> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,7> {
    typedef float16alt FloatType;
};


template <>
struct BackendType<8,8> {
    typedef float FloatType;
};


template <>
struct BackendType<8,9> {
    typedef float FloatType;
};


template <>
struct BackendType<8,10> {
    typedef float FloatType;
};


template <>
struct BackendType<8,11> {
    typedef float FloatType;
};


template <>
struct BackendType<8,12> {
    typedef float FloatType;
};


template <>
struct BackendType<8,13> {
    typedef float FloatType;
};


template <>
struct BackendType<8,14> {
    typedef float FloatType;
};


template <>
struct BackendType<8,15> {
    typedef float FloatType;
};


template <>
struct BackendType<8,16> {
    typedef float FloatType;
};


template <>
struct BackendType<8,17> {
    typedef float FloatType;
};


template <>
struct BackendType<8,18> {
    typedef float FloatType;
};


template <>
struct BackendType<8,19> {
    typedef float FloatType;
};


template <>
struct BackendType<8,20> {
    typedef float FloatType;
};


template <>
struct BackendType<8,21> {
    typedef float FloatType;
};


template <>
struct BackendType<8,22> {
    typedef float FloatType;
};


template <>
struct BackendType<8,23> {
    typedef float FloatType;
};


#ifdef RISCV64
template <>
struct BackendType<8,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<8,52> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,1> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,2> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,3> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,4> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,5> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,6> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,7> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,8> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,9> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,10> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,11> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,12> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,13> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,14> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,15> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,16> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,17> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,18> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,19> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,20> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,21> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,22> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,23> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<9,52> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,1> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,2> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,3> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,4> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,5> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,6> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,7> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,8> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,9> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,10> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,11> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,12> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,13> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,14> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,15> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,16> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,17> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,18> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,19> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,20> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,21> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,22> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,23> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<10,52> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,1> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,2> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,3> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,4> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,5> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,6> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,7> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,8> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,9> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,10> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,11> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,12> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,13> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,14> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,15> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,16> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,17> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,18> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,19> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,20> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,21> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,22> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,23> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,24> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,25> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,26> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,27> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,28> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,29> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,30> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,31> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,32> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,33> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,34> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,35> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,36> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,37> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,38> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,39> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,40> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,41> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,42> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,43> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,44> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,45> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,46> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,47> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,48> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,49> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,50> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,51> {
    typedef double FloatType;
};
#endif


#ifdef RISCV64
template <>
struct BackendType<11,52> {
    typedef double FloatType;
};
#endif


