// Address: 004d00d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d00d4(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  cVar2 = FUN_00403c10(iVar1,PTR_PTR_004c6c0c);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_1 + 0x27c);
  }
  else {
    *(bool *)(param_1 + 0x210) = param_1 == iVar1;
  }
  FUN_0046be8c(param_1,param_2);
  return;
}

