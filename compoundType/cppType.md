##Ｃ++ learnning
>###注意事项
	1. ．．／默认路径为／leraning/C++ ,伺候所有文件都是基于此路径　
	2. 此处所有文件都是基于C11标准
	3. 文件上传地址默认为github
	   github配置 : 
	   		Email : einsamerSolitarZhou@gmail.com
	   		Name : solitarZhou
	4. September 8, 2015 11:40 PM
	5. cppType.md
	6. Writing by : Solitar Zhou


*****

####数组
1. #####数组初始化	
		1. C11中,数组初始化的时候,可以不写等号 
		 	 Forexample: int array[] {1 , 2 , 3 , 4 , 5 , 6}
		2. 字符串常量申明的时候,可以只使用一个引号的方式来申明字符串
2. #####字符串处理方法
		1. 头文件 : cstring ____老式申明为=> string.h
			Forexample:字符串拼接 : ../compoundType/string.cpp
		2. 在字符串输入中,cin的话,使用空白(空格,制表符,换行符)结束 ,即 Solitar Zhou 只会将Solitar写入数组
		3. 当要面向一行读取,使用getline() ;包含两个参数 变量和长度 => cin.getline(name , 20) ;
			Forexample : ../compoundType/instr2.cpp
		4. get的使用 : 在get中若不限制长度,有爆栈的风险 
		5. getline不保存换行符 , 且在保存时,用空字符替代换行符;get不丢且换行符,保存换行符
		6. 若get想越过换行符可使用cin.get(name , type).get();等同于两次调用cin.get() ;
			Forexample : ../compoundType/instr3.cpp
		7. getline()或者get()读取空行会导致在前一条结束位置读取,且读取空行后将失效位(failbit) ,将导致接下来输入被阻断,需要使用cin.clear();
		8. Forexample : ../compoundType/numstr.cpp
3. #####