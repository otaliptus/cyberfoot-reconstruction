// Address: 004c0dc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004c0dc8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool local_14;
  
  local_14 = true;
  iVar2 = FUN_00404ba4(param_1);
  if (3 < iVar2) {
    iVar2 = -1;
    iVar3 = FUN_00404ba4(param_1);
    iVar4 = -1;
    while( true ) {
      cVar1 = FUN_004c09bc(param_1,iVar3);
      iVar5 = iVar4;
      if ((cVar1 == '\x06') && (iVar5 = iVar3, iVar2 < 0)) {
        iVar2 = iVar3;
        iVar5 = iVar4;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 1) break;
      iVar4 = FUN_00404ba4(param_1);
      if ((iVar3 < iVar4 + -4) || (iVar4 = iVar5, -1 < iVar5)) break;
    }
    if (iVar5 < 0) {
      iVar5 = iVar2;
    }
    if ((0 < iVar5) && (iVar2 = FUN_00404ba4(param_1), iVar5 != iVar2)) {
      local_14 = *(char *)(param_1 + iVar5) != DAT_00669590;
    }
  }
  return local_14;
}

