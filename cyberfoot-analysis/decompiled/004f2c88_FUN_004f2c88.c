// Address: 004f2c88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f2c88(int param_1)

{
  char cVar1;
  int cx;
  uint uVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  int iVar7;
  
  cx = GetSystemMetrics(2);
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x20c) == '\x01') {
      uVar2 = *(uint *)(&DAT_00669c9c + (uint)*(byte *)(param_1 + 0x2a8) * 4) | 8;
      iVar3 = FUN_00465c50(param_1);
      iVar3 = iVar3 + -1;
      iVar7 = 1;
      iVar4 = FUN_00465c0c(param_1);
      iVar4 = iVar4 - *(int *)(*(int *)(param_1 + 0x28c) + 0x48);
      pHVar6 = (HWND)0x0;
      pHVar5 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x28c));
      SetWindowPos(pHVar5,pHVar6,iVar4,iVar7,cx,iVar3,uVar2);
    }
    else {
      uVar2 = *(uint *)(&DAT_00669c9c + (uint)*(byte *)(param_1 + 0x2a8) * 4) | 8;
      iVar3 = FUN_00465c50(param_1);
      iVar3 = iVar3 + 1;
      iVar7 = 0;
      iVar4 = FUN_00465c0c(param_1);
      iVar4 = iVar4 - *(int *)(*(int *)(param_1 + 0x28c) + 0x48);
      pHVar6 = (HWND)0x0;
      pHVar5 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x28c));
      SetWindowPos(pHVar5,pHVar6,iVar4,iVar7,cx,iVar3,uVar2);
    }
  }
  return;
}

