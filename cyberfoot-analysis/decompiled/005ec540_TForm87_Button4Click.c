// Address: 005ec540
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_Button4Click(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005ec5a8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_006462ac(0xf,&local_8);
  (**(code **)(*DAT_006d35d4 + 0x4c))(DAT_006d35d4,local_8);
  iVar3 = 10;
  piVar2 = &DAT_006d35ec;
  do {
    (**(code **)(**(int **)(*piVar2 + 0x168) + 8))(*(int **)(*piVar2 + 0x168),DAT_006d35d4);
    puVar1 = puStack_14;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005ec5af;
  puStack_18 = (undefined1 *)0x5ec5a7;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

