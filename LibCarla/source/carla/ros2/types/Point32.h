// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Point32.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */
// 防止头文件被重复包含，如果 _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT32_H_ 这个宏已经被定义过了，
// 则下面的代码不会再被编译，避免重复定义等问题
#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT32_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT32_H_
// 包含 fastrtps 库中用于固定大小字符串的头文件，可能在后续处理字符串相关操作时会用到
#include <fastrtps/utils/fixed_size_string.hpp>
// 包含标准C/C++中用于基本整数类型定义的头文件
#include <stdint.h>
// 包含标准C++中数组相关的头文件，用于操作数组类型的数据结构
#include <array>
// 包含标准C++中字符串相关的头文件，用于操作字符串对象
#include <string>
// 包含标准C++中向量（动态数组）相关的头文件，方便处理可变长度的数据集合
#include <vector>
// 包含标准C++中映射（关联容器，类似字典）相关的头文件，用于键值对形式的数据存储和查找
#include <map>
// 包含标准C++中 bitset（位集合）相关的头文件，可用于按位操作和存储位相关的数据
#include <bitset>
// 以下是针对Windows平台的条件编译代码块
#if defined(_WIN32)
// 如果定义了 EPROSIMA_USER_DLL_EXPORT 这个宏，将 eProsima_user_DllExport 定义为 __declspec( dllexport )，
// 这通常用于在Windows下导出动态链接库中的符号（函数、类等），以便外部程序可以使用
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
 // 如果没有定义 EPROSIMA_USER_DLL_EXPORT 宏，则简单地定义 eProsima_user_DllExport 为空，
 // 具体含义可能在后续代码根据是否为空进行不同处理
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
// 如果不是Windows平台，也简单地定义 eProsima_user_DllExport 为空
#else
#define eProsima_user_DllExport
#endif  // _WIN32
// 又是针对Windows平台的条件编译代码块，主要用于处理 Point32 相关的动态链接库导入导出相关的定义
#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
// 如果同时定义了 Point32_SOURCE 和 EPROSIMA_USER_DLL_EXPORT，将 Point32_DllAPI 定义为 __declspec( dllexport )，
// 表示导出 Point32 相关的符号（比如类等）
#if defined(Point32_SOURCE)
#define Point32_DllAPI __declspec( dllexport )
// 如果只定义了 EPROSIMA_USER_DLL_EXPORT 但没定义 Point32_SOURCE，将 Point32_DllAPI 定义为 __declspec( dllimport )，
// 表示从外部动态链接库中导入 Point32 相关符号，也就是使用其他地方已经编译好的相关代码
#else
#define Point32_DllAPI __declspec( dllimport )
#endif // Point32_SOURCE
 // 如果没有定义 EPROSIMA_USER_DLL_EXPORT，将 Point32_DllAPI 定义为空
#else
#define Point32_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
// 非Windows平台下，同样将 Point32_DllAPI 定义为空
#else
#define Point32_DllAPI
#endif // _WIN32
// 定义 eprosima 命名空间，在其中可能包含与该项目相关的多个子命名空间和类型等
namespace eprosima {
// 定义 fastcdr 子命名空间，里面应该是和CDR（Common Data Representation，一种数据序列化格式相关的内容）
// 此处只是前置声明了 Cdr 类，具体定义应该在其他地方，这种前置声明可以解决循环包含等问题，让代码编译能通过
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima
// 定义 geometry_msgs 命名空间，通常用于存放和机器人相关的消息类型等定义
namespace geometry_msgs {
// 定义 msg 子命名空间，一般用来细分不同的消息类别等
    namespace msg {
        /*!
         * @brief This class represents the structure Point32 defined by the user in the IDL file.
         * @ingroup POINT32
         * 这个类表示用户在IDL（接口定义语言）文件中定义的 Point32 结构体，
         * @ingroup 相关的注释可能用于文档生成工具来对代码结构进行分组展示等，此处表示属于 POINT32 这个组
         */
        class Point32
        {
        public:

            /*!
             * 默认构造函数，用于创建一个 Point32 类的默认初始化对象
             */
            eProsima_user_DllExport Point32();
            /*!
             * 默认析构函数，用于在对象生命周期结束时进行资源清理等操作
             */
            eProsima_user_DllExport ~Point32();
            /*!
             * 拷贝构造函数，用于从另一个已存在的 Point32 对象创建一个新的相同副本，参数 x 是要拷贝的那个 Point32 对象的引用
             */
            eProsima_user_DllExport Point32(
                    const Point32& x);
            /*!
             * 移动构造函数，用于高效地“窃取”另一个 Point32 对象的资源来初始化新对象，参数 x 是要移动资源的那个 Point32 对象的引用，
             * 它通常比拷贝构造函数更高效，适用于临时对象等情况
             */
            eProsima_user_DllExport Point32(
                    Point32&& x) noexcept;
            /*!
             * 拷贝赋值运算符重载，用于将一个 Point32 对象的值复制到另一个已存在的 Point32 对象中，参数 x 是提供值的那个 Point32 对象的引用
             */
            eProsima_user_DllExport Point32& operator =(
                    const Point32& x);
            /*!
             * 移动赋值运算符重载，用于将一个 Point32 对象的资源移动（转移）到另一个已存在的 Point32 对象中，参数 x 是提供资源的那个 Point32 对象的引用
             */
            eProsima_user_DllExport Point32& operator =(
                    Point32&& x) noexcept;
            /*!
             * 相等比较运算符重载，用于比较当前 Point32 对象和另一个 Point32 对象是否相等，参数 x 是要与之比较的那个 Point32 对象
             */
            eProsima_user_DllExport bool operator ==(
                    const Point32& x) const;
            /*!
             * 不等比较运算符重载，用于比较当前 Point32 对象和另一个 Point32 对象是否不相等，参数 x 是要与之比较的那个 Point32 对象
             */
            eProsima_user_DllExport bool operator !=(
                    const Point32& x) const;
            /*!
             * 设置成员变量 x 的值的函数，参数 _x 是要设置给成员 x 的新值
             */
            eProsima_user_DllExport void x(
                    float _x);
            /*!
             * 获取成员变量 x 的值的函数，返回成员 x 当前存储的值
             */
            eProsima_user_DllExport float x() const;
            /*!
             * 返回成员变量 x 的引用的函数，通过返回引用可以直接对成员 x 进行修改等操作
             */
            eProsima_user_DllExport float& x();
            /*!
             * 设置成员变量 y 的值的函数，参数 _y 是要设置给成员 y 的新值
             */
            eProsima_user_DllExport void y(
                    float _y);
            /*!
             * 获取成员变量 y 的值的函数，返回成员 y 当前存储的值
             */
            eProsima_user_DllExport float y() const;
            /*!
             * 返回成员变量 y 的引用的函数，通过返回引用可以直接对成员 y 进行修改等操作
             */
            eProsima_user_DllExport float& y();
            /*!
             * 设置成员变量 z 的值的函数，参数 _z 是要设置给成员 z 的新值
             */
            eProsima_user_DllExport void z(
                    float _z);
            /*!
             * 获取成员变量 z 的值的函数，返回成员 z 当前存储的值
             */
            eProsima_user_DllExport float z() const;
            /*!
             * 返回成员变量 z 的引用的函数，通过返回引用可以直接对成员 z 进行修改等操作
             */
            eProsima_user_DllExport float& z();
           /*!
            * 根据缓冲区对齐情况，返回一个对象最大序列化大小的函数，参数 current_alignment 是当前缓冲区的对齐方式，
            * 返回值就是对应的最大序列化大小，用于确定存储或传输该对象时所需的最大空间等情况
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);
            /*!
             * 根据缓冲区对齐情况，返回给定数据的序列化大小的函数，参数 data 是要计算序列化大小的数据（这里是 Point32 类型的对象），
             * current_alignment 是当前缓冲区的对齐方式，返回值就是对应的数据序列化后的大小，用于准确知道存储或传输该数据实际需要的空间
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const geometry_msgs::msg::Point32& data,
                    size_t current_alignment = 0);
            /*!
             * 使用CDR序列化方式对对象进行序列化的函数，参数 cdr 是用于执行CDR序列化操作的对象，将当前 Point32 对象按照CDR格式进行序列化，
             * 以便进行数据传输、存储等后续操作
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;
            /*!
             * 使用CDR序列化方式对对象进行反序列化的函数，参数 cdr 是用于执行CDR反序列化操作的对象，从给定的CDR格式数据中还原出 Point32 对象，
             * 比如从接收到的网络数据或者存储的数据中恢复出对应的对象实例
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);
            /*!
             * 根据缓冲区对齐情况，返回对象的键（Key）的最大序列化大小的函数，参数 current_alignment 是当前缓冲区的对齐方式，
             * 返回值就是对应的键的最大序列化大小，在涉及到以键值对形式处理对象等场景中会用到，比如在某些存储或查找操作中确定键的空间需求
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);
            /*!
             * 判断该类型是否已经定义了键（Key）的函数，如果已经定义则返回 true，否则返回 false，用于在相关操作前检查键是否存在
             */
            eProsima_user_DllExport static bool isKeyDefined();
            /*!
             * 使用CDR序列化方式对对象的键成员进行序列化的函数，参数 cdr 是用于执行CDR序列化操作的对象，将当前 Point32 对象中与键相关的成员按照CDR格式进行序列化，
             * 比如在一些需要单独处理键的场景中使用
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;
        private:
// 定义成员变量 m_x，用于存储 Point32 结构体中的 x 坐标值，类型为 float（单精度浮点数）
            float m_x;
// 定义成员变量 m_y，用于存储 Point32 结构体中的 y 坐标值，类型为 float（单精度浮点数）
            float m_y;
// 定义成员变量 m_z，用于存储 Point32 结构体中的 z 坐标值，类型为 float（单精度浮点数）
            float m_z;
        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT32_H_
