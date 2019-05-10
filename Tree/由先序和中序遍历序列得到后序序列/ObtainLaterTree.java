package Tree;

import java.util.Scanner;

/**
 * 根据中序和前序遍历结果得到后序遍历序列
 * 前序遍历结果：18 14 7 3 11 22 35 27
 * 中序遍历结果：3 7 11 14 18 22 27 35
 * 先构建二叉树然后再进行后序遍历
 */

public class ObtainLaterTree {

    static int index = 0;
    static int n;

    public static void main(String[] args) {
        int i;
        //用数组来存储前序和中序遍历结果
        //order存储前序，mid存储后序
//        Scanner sc = new Scanner(System.in);
//        n = sc.nextInt();
//        int[] order = new int[n];
//        int[] mid = new int[n];
//        for(i = 0;i < n;i++){
//            order[i] = sc.nextInt();
//        }
//        System.out.println(order.toString());
//        for(i = 0;i < n;i++){
//            mid[i] = sc.nextInt();
//        }
        n = 8;
        int[] order = new int[]{18,14,7,3,11,22,35,27};
        int[] mid = new int[]{3,7,11,14,18,22,27,35};
        TreeDefine root = build(order,mid,0,n);
        System.out.println(" " + root);
        later(root);
    }

    //递归的进行后序遍历
    static void later(TreeDefine root){
        if(root != null){
            later(root.lChild);
            later(root.rChild);
            System.out.println(root.a);
        }
    }
    static TreeDefine build(int order[],int mid[],int left,int right){
        if(left >= n){
            return null;
        }
        if(right < 0){
            return null;
        }
        if(left > right){
            return null;
        }
        int target = order[index];
        System.out.println(index);
        int j = find_mid(mid,target,n);
        System.out.println(" " + j+1);
        System.out.println(" " + j);
        TreeDefine root = new TreeDefine(target);
        index++;
        root.lChild = build(order,mid,left,j - 1);
        root.rChild = build(order,mid,j + 1,right);
        return root;
    }
    static int find_mid(int mid[],int target,int n){
        int i;
        for(i = 0;i < n;i++){
            if(mid[i] == target){
                return i;
            }
        }
        return -1;
    }

}

