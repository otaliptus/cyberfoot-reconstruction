// Address: 0040a5ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040a5ac(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00404ba4(param_2);
  uVar3 = FUN_00404da4(param_1);
  do {
    if (iVar2 < 1) {
      return iVar2;
    }
    cVar1 = *(char *)(param_2 + -1 + iVar2);
    if ((cVar1 != '\0') && (iVar4 = thunk_FUN_0040a916(uVar3,cVar1), iVar4 != 0)) {
      cVar1 = FUN_0040ed74(param_2,iVar2);
      if (cVar1 != '\x02') {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    }
    iVar2 = iVar2 + -1;
  } while( true );
}

