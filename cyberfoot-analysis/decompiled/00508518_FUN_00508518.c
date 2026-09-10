// Address: 00508518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00508518(int param_1,int param_2,int param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 local_18 [8];
  int local_10;
  int local_c [2];
  
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    local_10 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),param_3);
    iVar2 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),param_2);
    if (param_3 == param_2) {
      if (param_4 == '\0') {
        FUN_004070b8(0,0,local_18);
        FUN_0050789c(param_1,local_18,1);
        return;
      }
      iVar2 = *(int *)(local_10 + 0x74);
    }
    else if (*(char *)(iVar2 + 0xa9) == '\0') {
      if (param_2 < param_3) {
        bVar1 = FUN_0050a2e8(local_10);
        if (bVar1 < 2) {
          iVar2 = *(int *)(local_10 + 0x74) + *(int *)(local_10 + 0xb0);
        }
        else {
          iVar2 = *(int *)(local_10 + 0x74) + *(int *)(local_10 + 0xb0);
        }
      }
      else {
        iVar2 = *(int *)(local_10 + 0x74);
      }
    }
    else if (param_2 < param_3) {
      bVar1 = FUN_0050a2e8(local_10);
      if (bVar1 < 2) {
        iVar2 = *(int *)(local_10 + 0x74);
      }
      else {
        iVar2 = *(int *)(local_10 + 0x74) + *(int *)(local_10 + 0xb0);
      }
    }
    else {
      iVar2 = *(int *)(local_10 + 0x74);
    }
    FUN_004070b8(iVar2,0,local_18);
    FUN_00465d20(param_1,local_18,local_c);
    if (*(int *)(param_1 + 0x290) <= param_3) {
      local_c[0] = local_c[0] - *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
    }
    FUN_0050789c(param_1,local_c,0);
  }
  return;
}

