// Address: 005c4e38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm69_combo1Change(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005c4f8b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = 1;
  do {
    FUN_005c46f0(param_1,iVar3,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x11);
  iVar3 = 1;
  do {
    FUN_005c45e0(iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  FUN_005c489c();
  uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x4e8));
  switch(uVar2) {
  case 0:
    FUN_004e1414(*(undefined4 *)(param_1 + 0x49c),*(undefined4 *)PTR_DAT_0066b3f8);
    func_0x005c4920(param_1,4,1);
    break;
  case 1:
    FUN_004e1414(*(undefined4 *)(param_1 + 0x49c),*(undefined4 *)(PTR_DAT_0066b3f8 + 4));
    func_0x005c4920(param_1,4,2);
    break;
  case 2:
    FUN_004e1414(*(undefined4 *)(param_1 + 0x49c),*(undefined4 *)(PTR_DAT_0066b3f8 + 8));
    func_0x005c4920(param_1,4,3);
    break;
  case 3:
    FUN_004e1414(*(undefined4 *)(param_1 + 0x49c),*(undefined4 *)(PTR_DAT_0066b3f8 + 0xc));
    func_0x005c4920(param_1,4,4);
    break;
  case 4:
    FUN_00642c50(0xdd,&local_8);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x49c),local_8);
    func_0x005c4920(param_1,6,2);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005c4f92;
  puStack_18 = (undefined1 *)0x5c4f8a;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

