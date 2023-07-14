//
// Created by karun on 14/7/23.
//

#include "bits/stdc++.h"

std::vector<int> find_union(std::vector<int> arr1, std::vector<int> arr2){

    int i = 0, j = 0;
    int s1 = arr1.size();
    int s2 = arr2.size();

    std::vector<int> unionarr;

    while(i <= s1 && j <= s2){

        if (arr1[i] <= arr2[j])
            if (unionarr.empty() || unionarr.back() != arr1[i]) unionarr.push_back(arr1[i++]);

        else {
            if (unionarr.empty() || unionarr.back() != arr1[i]) unionarr.push_back(arr2[j++]);
        }

    }

    while (j < s2)
        if ( unionarr.empty() || unionarr.back() != arr1[i]) unionarr.push_back(arr2[j++]);

    while (i < s1)
        if ( unionarr.empty() || unionarr.back() != arr1[i]) unionarr.push_back(arr1[i++]);

    return unionarr;
}