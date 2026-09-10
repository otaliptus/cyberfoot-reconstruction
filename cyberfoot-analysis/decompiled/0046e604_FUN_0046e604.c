// Address: 0046e604
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046e604(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x6a) == '\0') {
      FUN_0046e578(param_1,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x70),
                   *(undefined4 *)(param_1 + 0x74));
    }
    FUN_0046e4ac(param_1);
    uVar2 = FUN_0046e664(param_1,param_2,param_3,param_4);
    if ((char)uVar2 != '\0') {
      ShowCursor(0);
    }
  }
  return uVar2;
}

