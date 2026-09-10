// Address: 0043ae24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043ae24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x160);
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    if (*(char *)(param_1 + 0x169) == '\x06') {
      FUN_0042a968(*(undefined4 *)(iVar3 + 0x10),2);
      FUN_0042a94c(*(undefined4 *)(iVar3 + 0x10),0xe);
      FUN_0042a88c(*(undefined4 *)(iVar3 + 0x10),0xffd8ce);
      FUN_0042ac88(*(undefined4 *)(iVar3 + 0x14),1);
      uVar1 = FUN_00465c0c(local_8);
      uVar2 = FUN_00465c50(local_8);
      FUN_0042b158(iVar3,0,0,uVar2,uVar1);
      return;
    }
    FUN_0042a968(*(undefined4 *)(iVar3 + 0x10),0);
    FUN_0042a94c(*(undefined4 *)(iVar3 + 0x10),4);
    FUN_0042a88c(*(undefined4 *)(iVar3 + 0x10),0);
    FUN_0042ac88(*(undefined4 *)(iVar3 + 0x14),0);
  }
  FUN_0042a998(*(undefined4 *)(iVar3 + 0x10),1);
  if (*(char *)(local_8 + 0x168) == '\0') {
    local_c = 0xff000010;
    local_10 = 0xff000014;
  }
  else {
    local_c = 0xff000014;
    local_10 = 0xff000010;
  }
  uVar1 = local_c;
  switch(*(undefined1 *)(local_8 + 0x169)) {
  case 0:
    FUN_0041c990(0,0,*(int *)(local_8 + 0x48) + -1,auStack_20,*(int *)(local_8 + 0x4c) + -1);
    func_0x0043acf4(auStack_20);
    break;
  case 1:
    local_c = local_10;
    FUN_0041c990(1,1,*(int *)(local_8 + 0x48) + -1,auStack_20,*(int *)(local_8 + 0x4c) + -1);
    func_0x0043acf4(auStack_20);
    local_10 = uVar1;
    local_c = uVar1;
    FUN_0041c990(0,0,*(int *)(local_8 + 0x48) + -2,auStack_20,*(int *)(local_8 + 0x4c) + -2);
    func_0x0043acf4(auStack_20);
    break;
  case 2:
    FUN_0043ade4(local_c,0,0,0,*(undefined4 *)(local_8 + 0x48));
    FUN_0043ade4(local_10,0,1,1,*(undefined4 *)(local_8 + 0x48));
    break;
  case 3:
    iVar3 = *(int *)(local_8 + 0x4c) + -2;
    FUN_0043ade4(local_c,0,iVar3,iVar3,*(undefined4 *)(local_8 + 0x48));
    iVar3 = *(int *)(local_8 + 0x4c) + -1;
    FUN_0043ade4(local_10,0,iVar3,iVar3,*(undefined4 *)(local_8 + 0x48));
    break;
  case 4:
    FUN_0043ade4(local_c,0,0,*(undefined4 *)(local_8 + 0x4c),0);
    FUN_0043ade4(local_10,1,0,*(undefined4 *)(local_8 + 0x4c),1);
    break;
  case 5:
    iVar3 = *(int *)(local_8 + 0x48) + -2;
    FUN_0043ade4(local_c,iVar3,0,*(undefined4 *)(local_8 + 0x4c),iVar3);
    iVar3 = *(int *)(local_8 + 0x48) + -1;
    FUN_0043ade4(local_10,iVar3,0,*(undefined4 *)(local_8 + 0x4c),iVar3);
  }
  return;
}

