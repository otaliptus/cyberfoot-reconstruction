// Address: 0040a57c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040a57c(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00404ba4(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  while (cVar1 = FUN_0040ed74(param_1,iVar2), cVar1 == '\x02') {
    iVar2 = iVar2 + -1;
  }
  return param_1 + -1 + iVar2;
}

