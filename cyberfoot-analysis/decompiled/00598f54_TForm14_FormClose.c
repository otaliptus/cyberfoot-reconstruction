// Address: 00598f54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_FormClose(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0059900b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_30 = &LAB_00598fe0;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_3;
  uVar2 = FUN_00402c38();
  FUN_006468f4(uVar2,&local_10);
  FUN_00405330(&local_c,3);
  FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_c);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = L"</shad>";
  *local_8 = 2;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00599012;
  puStack_30 = (undefined1 *)0x59900a;
  FUN_00405008(&local_10,2,puVar1);
  return;
}

