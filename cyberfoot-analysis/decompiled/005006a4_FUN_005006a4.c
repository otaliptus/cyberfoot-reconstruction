// Address: 005006a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005006a4(int param_1,undefined4 param_2,int param_3,char param_4,int param_5)

{
  char cVar1;
  tagRECT local_18;
  undefined4 local_8;
  
  local_18.left = *(LONG *)(param_1 + 0x24);
  local_18.top = *(LONG *)(param_1 + 0x28);
  local_18.right = *(LONG *)(param_1 + 0x2c);
  local_18.bottom = *(LONG *)(param_1 + 0x30);
  local_8 = param_2;
  InflateRect(&local_18,-param_3,-param_3);
  if (0 < param_5) {
    if (*(char *)(param_1 + 0x45) == '\0') {
      FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14),0xff00000f);
    }
    else {
      FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14),0xff00000e);
    }
    if (0 < param_5) {
      do {
        FUN_0042afc8(*(undefined4 *)(param_1 + 0x20),&local_18);
        InflateRect(&local_18,-1,-1);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
    if (cVar1 == '\0') {
      if (param_4 == '\0') {
        FUN_0050053c(param_1,local_8,&local_18);
      }
      else if (param_4 == '\x01') {
        FUN_0042b20c(*(undefined4 *)(param_1 + 0x20),&local_18,local_8);
      }
    }
  }
  return;
}

