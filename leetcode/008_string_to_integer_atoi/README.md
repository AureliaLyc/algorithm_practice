# String to Integer (atoi)
==
Implement atoi to convert a string to an integer. <br>

## 理解
我最初想到以下几点：
1. 前面不能有space
2. 到不是0-9为止
3. 没转化的，返回0
4. 越界的问题，
没想到的
5. 用于判断越界的是INT_MAX和INT_MIN
6. 超过这个届，就不用在继续转化了