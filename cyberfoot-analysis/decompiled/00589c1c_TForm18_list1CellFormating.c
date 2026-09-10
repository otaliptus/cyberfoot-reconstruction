// Address: 00589c1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm18_list1CellFormating
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 *param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00589c9e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxforacasa");
  iVar2 = FUN_0050a2cc();
  uVar3 = param_3 == iVar2;
  if ((bool)uVar3) {
    (**(code **)(**(int **)(param_1 + 0x2fc) + 0x100))
              (*(int **)(param_1 + 0x2fc),param_3,param_7,&local_8);
    FUN_00405378(local_8,&DAT_00589cc4);
    if ((bool)uVar3) {
      *param_6 = 0x800000;
    }
    else {
      *param_6 = 0xb9;
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00589ca5;
  puStack_18 = (undefined1 *)0x589c9d;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

