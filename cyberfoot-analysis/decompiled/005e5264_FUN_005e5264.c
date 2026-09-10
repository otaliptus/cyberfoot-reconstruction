// Address: 005e5264
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e5264(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 1;
  puVar2 = PTR_DAT_0066ac38;
  do {
    FUN_005eb518(param_1,iVar1,*(undefined4 *)(puVar2 + param_2 * 0x2c + -0x2c));
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar1 != 0xc);
  iVar1 = 0xc;
  do {
    FUN_005eb518(param_1,iVar1,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x13);
  return;
}

