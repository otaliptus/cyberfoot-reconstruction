// Address: 0058a29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm18_combo1Change(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x58a2b7;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  puStack_1c = &LAB_0058a2ee;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
  FUN_00588bdc(param_1,*(undefined4 *)(DAT_006d21f0 + iVar2 * 4));
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x58a316;
  uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxdatareal",puVar1);
  puStack_18 = (undefined1 *)0x58a31d;
  FUN_0050a760(uVar3,1);
  return;
}

