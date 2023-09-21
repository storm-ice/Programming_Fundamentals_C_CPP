# Git⼯具交流讨论

本讨论内容⼤部分提取基于: https://git-scm.com/book/zh/v2/ 

百度培训视频: https://bit.baidu.com/products?id=247 

# ⼀. Git 安装和配置 

## (1) git的安装⽅法 

基于Ubuntu 18.04系统安装命令 
```bash
sudo apt install git-all 
sudo apt install vim 
```

Windows

[Git - Downloads](https://git-scm.com/download)

## (2) git的配置⽅式 

显⽰配置列表 
```bash
git config --list --show-origin
```
⽤户信息, 安装完 Git 之后， 要做的第⼀件事就是设置你的⽤户名和邮件地址. 这⼀点很重要, 因为每⼀个 Git 提交都会使⽤这些信息, 它们会写⼊到你的每⼀次提交中, 不可更改： 
```bash
git config --global user.name "storm-ice" 
git config --global user.email 22140604@bjtu.edu.cn 
git config --global core.editor vim
```

# ⼆. Git 基础 

## 2.1 从⽆到有创建本地git仓库 

### (1) 基于本地⽂件初始化⼀个git仓库 

```bash
$ mkdir demo
$ cd demo
$ touch README
$ git init
$ git add README
$ git commit 或者git commit -m "init base"
```



```bash
echo "# 7-1-printStar" >> README.md
cd
git add README.md
git commit -m "first commit"
git branch -M main
git remote set-url origin  https://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@github.com/storm-ice/Programming_Fundamentals_C_CPP/
git push -u origin main
```





报错如下

```bash
(base) zyb@zyb-Legion-Y9000P-IAH7H:~$ git push -u origin main
Username for 'https://github.com': storm-ice
Password for 'https://storm-ice@github.com': 
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/storm-ice/7-1-printStar.git/'

```



解决方案

【突发】解决remote: Support for password authentication was removed on August 13, 2021. Please use a perso_愤怒的可乐的博客-CSDN博客
https://blog.csdn.net/yjw123456/article/details/119696726




```
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
```



```bash
git remote set-url origin  https://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@github.com/storm-ice/Programming_Fundamentals_C_CPP/

```



```bash
(base) zyb@zyb-Legion-Y9000P-IAH7H:/media/zyb/F69402FB9402BDDD/VS2019_Project/Programming Fundamentals (C&C++)/7-1-printStar$ git push -u origin main
To https://github.com/storm-ice/7-1-printStar.git/
 ! [rejected]        main -> main (non-fast-forward)
error: 无法推送一些引用到 'https://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@github.com/storm-ice/7-1-printStar.git/'
提示：更新被拒绝，因为您当前分支的最新提交落后于其对应的远程分支。
提示：再次推送前，先与远程变更合并（如 'git pull ...'）。详见
提示：'git push --help' 中的 'Note about fast-forwards' 小节。
```



```bash
git push -u origin +main

```

报错

```bash
port 443
```

解决方案

[解决 Github port 443 : Timed out - 知乎](https://zhuanlan.zhihu.com/p/636418854)

```
# 注意修改成自己的IP和端口号
git config --global http.proxy http://127.0.0.1:7890 
git config --global https.proxy http://127.0.0.1:7890
```

# Git---git 报错 fatal: No such remote ‘origin

[Git---git 报错 fatal: No such remote ‘origin‘ 的解决方法_no such remote 'origin_绝世唐门三哥的博客-CSDN博客](https://blog.csdn.net/COCOLI_BK/article/details/117522156)

```bash
$ git remote add origin 远程url
```



```bash
$ git remote add origin 远程url
```





### 2.2 Git仓库的三种状态 

已提交(committed), 已修改(modified) 和 已暂存(staged). 

已修改表⽰修改了⽂件, 但还没保存到数据库中. 

已暂存表⽰对⼀个已修改⽂件的当前版本做了标记，使之包含在下次提交的快照中. 

已提交表⽰数据已经安全地保存在本地数据库中. 



