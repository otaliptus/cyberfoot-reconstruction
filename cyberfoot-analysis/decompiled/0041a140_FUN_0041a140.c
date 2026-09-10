// Address: 0041a140
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a140(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = 0;
      (((cVar1 = *(char *)(*param_1 + iVar2), cVar1 != '\0' && (cVar1 != ' ')) && (cVar1 != ',')) &&
      (cVar1 != ']')); iVar2 = iVar2 + 1) {
  }
  FUN_004049c4(param_2,*param_1,iVar2);
  for (; ((cVar1 = *(char *)(*param_1 + iVar2), cVar1 == ' ' || (cVar1 == ',')) || (cVar1 == ']'));
      iVar2 = iVar2 + 1) {
  }
  *param_1 = *param_1 + iVar2;
  return;
}

