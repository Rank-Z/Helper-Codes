#include<random>
#include<chrono>
using namespace ::std::chrono;


template<typename _Datatype>
_Datatype int_random(_Datatype _first, _Datatype _last) //range[_first,_last]
{
	long long _seed = time_point_cast<nanoseconds>(steady_clock::now()).time_since_epoch().count();//nanoseconds time from system
	::std::uniform_int_distribution<_Datatype> u(_first, _last); //int_distribution
	::std::default_random_engine e(_seed % 4294967295);//2^32-1
	return u(e);
}

template<typename _Datatype>
_Datatype real_random(_Datatype _from, _Datatype _to) //range[_from,_to)
{
	long long _seed = time_point_cast<nanoseconds>(steady_clock::now()).time_since_epoch().count();//nanoseconds time from system
	::std::uniform_real_distribution<_Datatype> u(_from, _to); //real_distribution
	::std::default_random_engine e(_seed % 4294967295);//2^32-1
	return u(e);
}


