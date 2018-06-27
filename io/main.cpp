//
//  main.cpp
//  io
//
//  Created by 20161104616 on 18/6/27.
//  Copyright © 2018年 20161104616. All rights reserved.
//

#include <iostream>

int main（）{
    
    ofstream oFile;  //定义文件输出流
    
    oFile.open("三维坐标.csv", ios::out | ios::trunc);    //打开要输出的文件，文件不存在会自动新建一个
    //写入数据
    oFile << "左相机坐标,,,右相机坐标,,,,世界坐标" << endl;
    oFile << "x,y,,x,y,,x,y,z" << endl;
    oFile << l.x  << "," << l.y << ",," << r.x  << "," << r.y << ",," << worldPoint.x  << "," << worldPoint.y  << "," << worldPoint.z << endl;
    //关闭文件
    oFile.close();
    
    
    //csv文件读取部分
    
    string value;//临时字符串
    ifstream iFile("三维坐标.csv");//打开要读入的文件
    //循环行读取
    while (iFile.good())
    {
        getline(iFile,value);
        //getline(iFile,value,','); //.csv文件用","作为分隔符
        cout<<value<<endl;

