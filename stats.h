#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics
{
    template <typename T=double>	//default
	class Stats
   	 {
	   public:
		T Average;
		T Max;
		T Min;
		Stats();//empty array
		//Stats(float avg,float max,float min);
		Stats(T average,T Max,T Min);
	};
	template<typename T=double>
	Stats<T> ComputeStatistics(const std::vector<T>& );
	
}

/*#include <vector>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<___>& );
}*/
