# JniDemo
简单的jni使用demo

# 改项目名
git clone 之后，
* 关闭Android Studio

* 修改project所在路径的文件夹名字为[NewName]

* 打开Android Stuido，import新的[NewName]路径工程(很重要,重新import工程，Android Studio会自动修改部分相关的project名字引用)

* 修改根目录下的.iml文件名为[NewName].iml，及该文件中的external.linked.project.id=[NewName]。（如果没有.iml文件，AS会自动生成一个，那就不必修改）

* 修改.idea/modules.xml里面的 fileurl="file://$PROJECT_DIR$/[NewName].iml" 和 filepath="$PROJECT_DIR$/[NewName].iml"

* 编译一遍，根据报错提示来修改剩余的地方。一般是：import com.topwise.httpdemo.R;还有main/AndroidManifest.xml的包名

# 如果想快速使用，可以仅仅复制以下五个文件
* app/src/main/java/com/topwise/jnidemo/BaseTestActivity.java
* app/src/main/java/com/topwise/jnidemo/MainActivity.java
* app/src/main/res/layout/activity_main.xml
* app/src/main/res/layout/left_scroll.xml
* app/src/main/res/layout/show_item.xml
