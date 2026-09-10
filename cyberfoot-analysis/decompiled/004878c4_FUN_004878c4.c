// Address: 004878c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004878c4(int param_1,uint param_2,LPARAM param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_14 [4];
  
  uVar5 = 0;
  local_14[0] = '\x01';
  iVar1 = *(int *)(DAT_0066cbf8 + 0x68);
  if ((iVar1 == 0) || (*(short *)(iVar1 + 0x2aa) == 0)) {
    if (*(short *)(param_1 + 0xf2) != 0) {
      uVar5 = (**(code **)(param_1 + 0xf0))
                        (*(undefined4 *)(param_1 + 0xf4),param_2,param_3,local_14);
    }
  }
  else {
    uVar5 = (**(code **)(iVar1 + 0x2a8))(*(undefined4 *)(iVar1 + 0x2ac),param_2,param_3,local_14);
  }
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x1c) & 0x10) != 0) {
      local_14[0] = '\0';
    }
    sVar3 = FUN_0046cc7c(iVar1);
    if (((sVar3 == -1) && (*(char *)(iVar1 + 0x57) == '\0')) && (*(int *)(iVar1 + 0x220) == 0)) {
      local_14[0] = '\0';
    }
  }
  if ((local_14[0] != '\0') && ((char)uVar5 == '\0')) {
    if ((iVar1 != 0) &&
       ((cVar2 = FUN_0046cde4(iVar1), cVar2 != '\0' && (*(int *)(iVar1 + 0x23c) != 0)))) {
      uVar4 = FUN_0046cae0(iVar1);
      cVar2 = FUN_00487f78(param_1);
      if (cVar2 == '\0') {
        return uVar5;
      }
      uVar5 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))
                        (*(int **)(param_1 + 0x4c),uVar4,*(undefined4 *)(iVar1 + 0x23c),param_3,
                         param_2 & 0xffff);
      return uVar5;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      if (*(char *)(param_1 + 0xa4) == '\0') {
        PostMessageA(*(HWND *)(param_1 + 0x30),0xb01f,param_2 & 0xffff,param_3);
      }
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x44) != 0) {
        uVar4 = FUN_0046cae0();
      }
      cVar2 = FUN_00487f78(param_1);
      if (cVar2 != '\0') {
        uVar5 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))
                          (*(int **)(param_1 + 0x4c),uVar4,*(undefined4 *)(param_1 + 0x50),param_3,
                           param_2 & 0xffff);
      }
    }
  }
  return uVar5;
}

