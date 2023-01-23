# slam14讲的笔记

<details>
<summary>

ch1

</summary>

介绍slam(同时定位与建图)

一个slam系统分为以下几个模块：

- 视觉里程计
- 后端优化
- 建图
- 回环检测
---
本书分为两个部分：
- 数学部分
    * 介绍模块
    * 三维刚体运动
    * 李群和李代数
    * 相机模型
    * 非线性优化（ceres库和g2o库的使用

- 应用
    * > 第七讲讲了基于特征点法的视觉里程计，包括特征点提取和匹配，对极几何约束的计算，PnP, ICP。 本讲主要讲述如何计算相邻两帧的运动。
    * > 第八讲讲了基于直接法的视觉里程计，包括光流和直接法的实现，借此计算两个图像之家难得运动估计。

    * > 第九讲是对七八讲中涉及到的Bundle Adjustment(BA)的深入讨论，利用稀疏性加速求解
    
    * > 第十讲是介绍位姿图，包括SE(3)和Sim(3)

    * > 第十一讲通过以词袋方法为主的回环检测，使用DBoW3书写训练和回环程序

    * > 第十二讲为地图构建(建图)

    * > 第十三讲是工程实践，本人基于手边传感器魔改了一些，即[coolslam](https://github.com/Tabbleman/coolslam)ps:还未完成:-(

    * > 第十四讲介绍了一些非常好用的开源slam
 ---
> 笔记中的数学表示：

$a = b$
---
> 笔记中代码块表示：
````cpp

/**
 *
 *Filename: readme.md
 *Created in 2023/01/22 15:31:52
 *Author: tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;


int main(int argc,char** argv){
    cin.tie(0);
    

    return 0;
}

````
</details>
<!--  -->
<details>
<summary>

ch2

</summary>

* 传感器部分：
    1. > 单目相机.通过二维的形式记录三维信息。好处：便宜。坏处：单张图片无法获得深度信息，以及其中的尺度（如近处的楼模型和远处高楼看上去一样）的不确定。因此需要再相机的移动中恢复其结构(structure)
    2. > 双目和深度相机：双目可以通过视差计算每个像素的深度（有时候不是那么可靠），而深度相机（rgbd）可以直接测出每个像素的距离。好处：双目可以勉勉强强得到像素的深度信息，rgbd可以获得可靠的深度信息。缺点：比较贵。
    

* 经典的slam框架:
    > ![alt](../../images/slam-framework.png)

    ### 其中
    1. 传感器信息读取再vslam主要是color images(有时候会有depth images)
    2. [前端视觉里程计](#ch7)
</details>
<!--  -->
<details>
<summary>

ch3

</summary>


</details>
<!--  -->
<details>
<summary>

ch4

</summary>


</details>
<!--  -->
<details>
<summary>

ch5

</summary>


</details>

<details>
<summary>

ch6

</summary>

<!--  -->

</details>

<!--  -->
<details name="ch7">
<summary>

ch7

</summary>


</details>
<!--  -->
<details>
<summary>

ch8

</summary>


</details>
<!--  -->
<details>
<summary>

ch9

</summary>


</details>
<details>
<summary>

ch10

</summary>


</details>
<!--  -->
<details>
<summary>

ch11

</summary>


</details>
<details>
<summary>

ch12

</summary>


</details>
<!--  -->
<details>
<summary>

ch13

</summary>


</details>
<!--  -->
<details>
<summary>

ch14

</summary>


</details>
