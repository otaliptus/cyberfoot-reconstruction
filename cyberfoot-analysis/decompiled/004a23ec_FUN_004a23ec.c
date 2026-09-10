// Address: 004a23ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a23ec(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x94);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x11e);
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x988);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x1e);
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0xa7c);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x13);
  *(undefined2 *)(param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return;
}

