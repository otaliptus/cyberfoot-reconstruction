// Address: 004c0f88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004c0f88(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar2 = FUN_004c0f2c(param_1);
  if (-1 < iVar2) {
    cVar1 = FUN_004c09bc(param_1,iVar2);
    bVar3 = (byte)(cVar1 - 1U) < 2;
  }
  return bVar3;
}

