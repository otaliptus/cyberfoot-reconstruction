// Address: 0046f710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046f710(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x10) == '\x01') {
    iVar1 = FUN_0046ee90(param_1);
    if (*(int *)(*(int *)(param_4 + -4) + 4) <= iVar1) {
      iVar1 = FUN_0046ee90(param_1);
      if (iVar1 - *(int *)(*(int *)(param_4 + -8) + 0xc) <= *(int *)(*(int *)(param_4 + -4) + 4)) {
        **(undefined4 **)(param_4 + -0xc) = 0x12;
        *(int *)(param_4 + -0x10) = param_1;
        goto LAB_0046f8ed;
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x10) == '\x02') {
    iVar1 = FUN_0046ee90(param_1);
    if (**(int **)(param_4 + -4) <= iVar1) {
      iVar1 = FUN_0046ee90(param_1);
      if (iVar1 - *(int *)(*(int *)(param_4 + -8) + 0xc) <= **(int **)(param_4 + -4)) {
        **(undefined4 **)(param_4 + -0xc) = 0x12;
        *(int *)(param_4 + -0x10) = param_1;
        goto LAB_0046f8ed;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_0046ea5c(param_1,1);
    iVar2 = FUN_0046ea5c(param_1,2);
    if (*(char *)(*(int *)(param_4 + -8) + 0x1c) == '\0') {
      if (((iVar2 <= **(int **)(param_4 + -4)) &&
          (**(int **)(param_4 + -4) <= iVar2 + *(int *)(*(int *)(param_4 + -8) + 0x18))) &&
         (iVar1 <= *(int *)(*(int *)(param_4 + -4) + 4))) {
        iVar2 = FUN_0046eac8(param_1,1);
        if (*(int *)(*(int *)(param_4 + -4) + 4) <= iVar1 + iVar2) {
          *(int *)(param_4 + -0x10) = param_1;
          if (*(int *)(*(int *)(param_4 + -4) + 4) < *(int *)(*(int *)(param_1 + 4) + 0x44) + 0xf) {
            **(undefined4 **)(param_4 + -0xc) = 0x14;
          }
          else {
            **(undefined4 **)(param_4 + -0xc) = 2;
          }
        }
      }
    }
    else if (((iVar1 <= *(int *)(*(int *)(param_4 + -4) + 4)) &&
             (*(int *)(*(int *)(param_4 + -4) + 4) <=
              iVar1 + *(int *)(*(int *)(param_4 + -8) + 0x18))) &&
            (iVar2 <= **(int **)(param_4 + -4))) {
      iVar1 = FUN_0046eac8(param_1,2);
      if (**(int **)(param_4 + -4) <= iVar2 + iVar1) {
        *(int *)(param_4 + -0x10) = param_1;
        if (*(int *)(*(int *)(param_1 + 4) + 0x40) + *(int *)(*(int *)(param_1 + 4) + 0x48) + -0xf <
            **(int **)(param_4 + -4)) {
          **(undefined4 **)(param_4 + -0xc) = 0x14;
        }
        else {
          **(undefined4 **)(param_4 + -0xc) = 2;
        }
      }
    }
  }
LAB_0046f8ed:
  if (*(int *)(param_4 + -0x10) == 0) {
    iVar1 = FUN_0046ef68(param_1);
    if (iVar1 != 0) {
      FUN_0046ef68(param_1);
      FUN_0046f710();
    }
  }
  if (*(int *)(param_4 + -0x10) == 0) {
    iVar1 = FUN_0046ef90(param_1);
    if (iVar1 != 0) {
      FUN_0046ef90(param_1);
      FUN_0046f710();
    }
  }
  return;
}

