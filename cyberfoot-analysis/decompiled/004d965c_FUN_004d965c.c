// Address: 004d965c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d965c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_0040502c(param_3,param_2);
  cVar1 = FUN_0040ff2c(param_1,&LAB_004d96a0);
  if (cVar1 != '\0') {
    iVar2 = FUN_004d947c(param_1);
    cVar1 = FUN_004d9234(iVar2);
    if (cVar1 != '\0') {
      FUN_0040502c(param_3,*(undefined4 *)(iVar2 + 0x34));
    }
  }
  return;
}

