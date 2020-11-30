# Loon软件Task配置 By lxk0301
# GitHub主页(https://github.com/lxk0301/jd_scripts)
# TG讨论组 (https://t.me/JD_fruit_pet)
# TG通知频道 (https://t.me/jdfruit)
# Loon的Task脚本订阅链接: https://raw.githubusercontent.com/lxk0301/jd_scripts/master/Loon/lxk0301_LoonTask.conf
# 使用方法:打开APP，顶部的配置 -> 脚本 -> 订阅脚本- > 点击右上角+号 -> 添加url链接 (https://raw.githubusercontent.com/lxk0301/jd_scripts/master/Loon/lxk0301_LoonTask.conf)

hostname = api.m.jd.com, draw.jdfcloud.com, jdjoy.jd.com, account.huami.com
# 东东农场
cron "5 6-18/6 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_fruit.js,tag=东东农场

# 东东萌宠
cron "10 7-19/6 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_pet.js,tag=东东萌宠

# 京东种豆得豆
cron "1 7-21/2 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_plantBean.js,tag=京东种豆得豆

# 宠汪汪(主要是日常任务,不过里面也有喂食和领取三餐狗粮)
cron "15 */2 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy.js,tag=宠汪汪

# 宠汪汪喂食
cron "12 */1 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_feedPets.js,tag=宠汪汪喂食

# 宠汪汪偷好友积分与狗粮
cron "0 0,6 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_steal.js,tag=宠汪汪偷好友积分与狗粮

# 宠汪汪积分兑换奖品
cron "1 0,8,12,16 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_reward.js,tag=宠汪汪积分兑换奖品

# 京东天天加速
cron "8 */3 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_speed.js,tag=京东天天加速

# 京东摇钱树
cron "3 */3 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_moneyTree.js,tag=京东摇钱树

# 京小超
cron "11 1-23/2 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_superMarket.js,tag=京小超

# 京小超兑换奖品
cron "0 0 0 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_blueCoin.js,tag=京小超兑换奖品

# 取关京东店铺商品
cron "55 23 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_unsubscribe.js,tag=取关京东店铺商品

# 进店领豆
cron "10 0 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_shop.js,tag=进店领豆

#摇京豆
cron "5 0 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_club_lottery.js,tag=摇京豆

# 京东手机狂欢城
cron "1 0-18/6 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_818.js, tag=京东手机狂欢城

# 京东星推官
cron "0 0 0 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_xtg.js, tag=京东星推官

#京东全民开红包
cron "1 1 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_redPacket.js, tag=京东全民开红包

#京豆变动通知
cron "2 9 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_bean_change.js, tag=京豆变动通知

#点点券
cron "20 0,20 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_necklace.js, tag=点点券

#十元街
cron "10 7 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_syj.js, tag=十元街

#东东小窝
cron "16 0 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_small_home.js, tag=东东小窝

#京喜工厂
cron "26 * * * *" script-path= https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_dreamFactory.js, tag=京喜工厂

#东东工厂
cron "10 * * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_jdfactory.js,tag=东东工厂


#京东全民营业领金币
cron "20 * * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_collectProduceScore.js, tag=京东全民营业领金币

#宠汪汪邀请助力与赛跑助力
cron "15 10 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_run.js, tag=宠汪汪邀请助力与赛跑助力

#小米运动
cron "25 17 * * *" script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/backUp/xmSports.js, tag=小米运动

#宠汪汪助力更新Token
http-response ^https:\/\/draw\.jdfcloud\.com(\/mirror)?\/\/api\/user\/addUser\?code= script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_run.js, requires-body=true, timeout=10, tag=宠汪汪助力更新Token

#宠汪汪助力获取Token
http-request ^https:\/\/draw\.jdfcloud\.com(\/mirror)?\/\/api\/user\/user\/detail\?openId= script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_run.js, requires-body=true, timeout=10, tag=宠汪汪助力获取Token

# 宠汪汪强制为别人助力
http-request ^https:\/\/draw\.jdfcloud\.com(\/mirror)?\/\/pet\/enterRoom\/h5\?reqSource=weapp&invitePin=.*+(&inviteSource=task_invite&shareSource=\w+&inviteTimeStamp=\d+&openId=\w+)?|^https:\/\/draw\.jdfcloud\.com(\/mirror)?\/\/pet\/helpFriend\?friendPin script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_joy_help.js, requires-body=true, timeout=10, tag=宠汪汪强制为别人助力

#聚宝盆投狗粮辅助(github@Zero-S1搬的)
http-response ^https:\/\/jdjoy\.jd\.com\/pet\/getPetTreasureBox|^https:\/\/draw\.jdfcloud\.com(\/mirror)?\/\/pet\/getPetTreasureBox script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/jd_petTreasureBox.js, requires-body=true, timeout=10, tag=聚宝盆投狗粮辅助

# 小米运动获取Token
http-response ^https:\/\/account\.huami\.com\/v2\/client\/login script-path=https://raw.githubusercontent.com/lxk0301/jd_scripts/master/backUp/xmSports.js, requires-body=true, timeout=10, tag=小米运动获取Token
