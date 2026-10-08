# def Binarysearch(arr,target) :
#     left = 0
#     right = len(arr) - 1

#     while left <= right:
#         mid = left + (right - left) // 2

#         if arr[mid] == target:
#             return mid
#         elif arr[mid] < target:
#             left = mid + 1
#         else:
#             right = mid - 1

#     return -1


# arr = [1,2,4,3,5,6]
# target = int(input("enter the target -- "))
# Binarysearch(arr,target)