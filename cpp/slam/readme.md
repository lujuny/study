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

    * > 第十三讲是工程实践，本人基于手边传感器魔改了一些，即[coolslam](https://github.com/Tabbleman/coolslam)

    * > 第十四讲介绍了一些非常好用的开源slam
 
> 笔记中的数学表示：

$a = b$

</details>
<!--  -->
<details>
<summary>

ch2

</summary>


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
<details>
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
