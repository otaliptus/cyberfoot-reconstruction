// Address: 0040fca0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0040fca0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  bool bVar4;
  int local_14;
  
  bVar4 = true;
  local_14 = param_3;
  DVar2 = GetCurrentThreadId();
  if (DVar2 != *(DWORD *)(param_1 + 0x24)) {
    FUN_0040fc5c(param_1);
    iVar1 = *(int *)(param_1 + 0x28);
    FUN_0040fad8(*(undefined4 *)(param_1 + 0x20),&local_14);
    bVar4 = *(int *)(local_14 + 0xc) != 0;
    if (bVar4) {
      FUN_0040fa48(param_1 + 0xc);
    }
    while( true ) {
      iVar3 = FUN_0040fa68(param_1 + 0xc,0xffff0001);
      if (iVar3 == 0xffff) break;
      iVar3 = FUN_0040fa68(param_1 + 0xc,0xffff);
      if (iVar3 != 0) {
        FUN_0040fc90(param_1);
      }
    }
    FUN_0040fc5c(param_1);
    if (bVar4) {
      FUN_0040fa54(param_1 + 0xc);
    }
    *(DWORD *)(param_1 + 0x24) = DVar2;
    iVar3 = FUN_0040fa48(param_1 + 0x28);
    bVar4 = iVar3 + -1 == iVar1;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return bVar4;
}

