#include <stdio.h>

/**
   为什么要使用github   www.github.com
        1.github上有很多开源的Demo 库
        2.需要将自己的工程project托管到github上 （管理自己的程序）
        3.团队开发项目（分工协作）
        4.个人网页（简单版本）

   如何将自己的工程托管到Github上
   CLion AndroidStudio 内嵌的版本管理工具
   1. 开启版本管理功能
      VCS  ->  enable version control integration
      -> 有一个空的本地仓库了
      -> CLion当前的更新没有提交到本地仓库 显示为红色
      -> 将更新的内容提交到本地仓库 commit
         vcs -> commit
         1.选择需要提交的文件
         2.提交的内容（更改的内容）
         3.点击commit

      -> 将本地仓库 提交 到远程服务器中 github
         1. file -> settings -> version control -> github -> add account
         2. 将本地仓库上传到github上
            vcs -> import into version control
                -> share project on github

      -> 将本地仓库更新的内容重新提交到 github上
         0. 将更改的内容提交到本地仓库
         1. vcs -> git -> push

      -> 自己或者别人如何访问这个仓库
         1. 登录github.com
         2. 找到对应的工程（仓库）
         3. 可以点击Code -> download zip
         4. 复制链接地址URL
            CLion -》 git from version control
                  -》 url 填入
                  -》 选择需要保存的位置
                  -》 clone

 */
int main() {

    return 0;
}














