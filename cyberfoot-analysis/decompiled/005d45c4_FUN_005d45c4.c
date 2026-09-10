// Address: 005d45c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d45c4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066ac78;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x700) = 0;
  puVar1[0x708] = 0;
  *(undefined4 *)(puVar1 + 0x5fc) = 0;
  *(undefined4 *)(puVar1 + 0x62c) = 1;
  *(undefined4 *)(puVar1 + 0x630) = 1;
  iVar3 = 10;
  puVar2 = (undefined4 *)(puVar1 + 0x604);
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_005d4774();
  return;
}

