// Address: 004d3bf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3bf8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144 [11];
  undefined1 local_118 [260];
  undefined1 local_14 [16];
  
  puStack_15c = &stack0xfffffffc;
  local_14c = 0;
  local_148 = 0;
  puVar3 = local_144;
  for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_160 = &LAB_004d3ca9;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  FUN_00408034(param_1,local_144,0x2c);
  FUN_004051a0(&local_148,local_118,0x104);
  FUN_004d33a8(param_1 + 0x2c,local_148);
  FUN_004051a0(&local_14c,local_14,0xe);
  FUN_004d33a8(param_1 + 0x234,local_14c);
  puVar1 = puStack_15c;
  *in_FS_OFFSET = uStack_164;
  puStack_15c = &LAB_004d3cb0;
  puStack_160 = (undefined1 *)0x4d3ca8;
  FUN_00405008(&local_14c,2,puVar1);
  return;
}

