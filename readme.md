## 运行环境

- vs2022 + qt
- 其他本版的vs有可能运行报错

## 文件结构

```powershell
D:.
│  file_widget.cpp  // 地图读取模块
│  file_widget.h
│  file_widget.ui
│  LineMat.cpp  // 转乘路线计算
│  LineMat.h
│  main.cpp  // 程序入口
│  point_dialog.cpp  // 鼠标悬浮显示站点信息
│  point_dialog.h
│  point_dialog.ui
│  point_label.cpp  // 前端：将计算得到的点/线刷新到地图界面上
│  point_label.h
│  Project5.cpp  // 调用各个子模块实现功能
│  Project5.h
│  Project5.qrc
│  Project5.sln
│  Project5.ui
│  Project5.vcxproj
│  Project5.vcxproj.filters
│  Project5.vcxproj.user
│  search_widget.cpp  // 搜索功能
│  search_widget.h
│  search_widget.ui
│  地图.bmp
│
├─data  // 数据存放
│      lines.txt
│      organization.txt
│      stops.txt
```



![](D:\Cpp_project\cpp-qt-homework\img\文件目录.png)

## 设计架构



