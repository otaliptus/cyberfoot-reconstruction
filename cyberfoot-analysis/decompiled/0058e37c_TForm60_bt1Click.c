// Address: 0058e37c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm60_bt1Click(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int *in_FS_OFFSET;
  undefined1 local_54 [24];
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 *puStack_24;
  undefined1 **ppuStack_20;
  int iStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &stack0xfffffffc;
  iVar5 = 10;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_18 = &LAB_0058e6a5;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  ppuStack_20 = (undefined1 **)0x58e3a7;
  FUN_00642c50(0x230,&local_c);
  ppuStack_20 = (undefined1 **)0x58e3b7;
  FUN_004052cc(&local_8,&DAT_0058e6b8,local_c);
  ppuStack_20 = (undefined1 **)0x58e3c4;
  FUN_00642c50(0x231,&stack0xfffffff0);
  ppuStack_20 = (undefined1 **)0x58e3d1;
  FUN_0040502c(PTR_DAT_0066b124,unaff_EBX);
  *PTR_DAT_0066b7a4 = 0;
  *(undefined4 *)PTR_DAT_0066acb4 = 0x3f800000;
  *(undefined4 *)PTR_DAT_0066ac50 = 0;
  *PTR_DAT_0066b35c = 0;
  *PTR_DAT_0066b62c = 0;
  ppuStack_20 = &local_18;
  piVar1 = *(int **)(*(int *)PTR_DAT_0066ad70 + 0x318);
  puStack_24 = (undefined4 *)0x58e418;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  puStack_24 = (undefined4 *)0x58e424;
  FUN_00416244(&local_28,uVar4,0xfc);
  puStack_24 = &local_28;
  local_28 = 0x58e435;
  FUN_00416478(local_38,&DAT_0058e6c4);
  puVar2 = puStack_24;
  puStack_24 = (undefined4 *)0x58e445;
  FUN_0050e448(piVar1,local_38,puVar2);
  puStack_24 = (undefined4 *)0x58e450;
  FUN_00404b6c(&local_14,local_18);
  puStack_24 = (undefined4 *)0x58e458;
  uVar4 = FUN_00409ff8(local_14);
  *(undefined4 *)PTR_DAT_0066afb0 = uVar4;
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066b2b4 * 0x2f8) == '\0') {
    puStack_24 = (undefined4 *)0x58e4b3;
    FUN_0058da50();
  }
  else {
    puStack_24 = (undefined4 *)0x58e48f;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0058c914,PTR_DAT_0066b6e8);
    puStack_24 = (undefined4 *)0x58e49e;
    (**(code **)(**(int **)PTR_DAT_0066b6e8 + 0xec))();
    if (*PTR_DAT_0066b62c == '\0') goto LAB_0058e65f;
  }
  if (*PTR_DAT_0066b62c == '\0') {
    puStack_24 = (undefined4 *)0x58e638;
    FUN_00483bc4(DAT_006d2228);
    puStack_24 = (undefined4 *)0x58e650;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0058cf4c,PTR_DAT_0066b15c);
    puStack_24 = (undefined4 *)0x58e65f;
    (**(code **)(**(int **)PTR_DAT_0066b15c + 0xec))();
  }
  else {
    puStack_24 = (undefined4 *)0x58e4c6;
    FUN_0064dbc4();
    if (*PTR_DAT_0066b2ac == '\0') {
      if (*PTR_DAT_0066aec4 == '\0') {
        puStack_24 = (undefined4 *)0x58e605;
        FUN_00483bc4(DAT_006d2228);
        puStack_24 = (undefined4 *)0x58e61d;
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0058cf4c,PTR_DAT_0066b15c);
        puStack_24 = (undefined4 *)0x58e62c;
        (**(code **)(**(int **)PTR_DAT_0066b15c + 0xec))();
      }
      else {
        puStack_24 = (undefined4 *)0x58e56b;
        (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x334) + 0x1dc))();
        puStack_24 = (undefined4 *)0x58e588;
        FUN_00650ec4(*(undefined4 *)PTR_DAT_0066afb0,*(undefined4 *)(PTR_DAT_0066ac78 + 8),
                     *(undefined4 *)PTR_DAT_0066acb8);
        if (*PTR_DAT_0066b35c != '\0') {
          puStack_24 = *(undefined4 **)PTR_DAT_0066acb8;
          local_28 = 0x58e5c2;
          FUN_00646d18(*(undefined4 *)PTR_DAT_0066b2b4,*(undefined4 *)PTR_DAT_0066ac50,
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066b5b8 + 0x28 + *(int *)PTR_DAT_0066afb0 * 0x130));
        }
        puStack_24 = (undefined4 *)0x58e5ce;
        FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
        puStack_24 = (undefined4 *)0x58e5e3;
        (**(code **)(**(int **)(*(int *)PTR_DAT_0066ad70 + 0x318) + 0x1dc))();
        puStack_24 = (undefined4 *)0x58e5ef;
        FUN_00597468(*(undefined4 *)PTR_DAT_0066ad70);
        puStack_24 = (undefined4 *)0x58e5f9;
        FUN_00483bc4(DAT_006d2228);
      }
    }
    else {
      puStack_24 = (undefined4 *)0x58e4eb;
      FUN_004030d4(local_54,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066afb0 * 0x130);
      puStack_24 = (undefined4 *)0x58e4fa;
      FUN_004030a4(local_54,&DAT_0058e6c8,0x15);
      puStack_24 = (undefined4 *)0x58e505;
      FUN_00405194(&local_3c,local_54);
      puStack_24 = (undefined4 *)0x58e510;
      FUN_0040526c(&local_3c,local_8);
      puStack_24 = (undefined4 *)0x58e525;
      FUN_004e1414(*(undefined4 *)(*(int *)PTR_DAT_0066ad70 + 0x36c),local_3c);
      puStack_24 = (undefined4 *)0x58e539;
      FUN_00466128(*(undefined4 *)(*(int *)PTR_DAT_0066ad70 + 0x36c),1);
      puStack_24 = (undefined4 *)0x58e543;
      FUN_00483bc4(DAT_006d2228);
    }
  }
LAB_0058e65f:
  puVar3 = local_18;
  *in_FS_OFFSET = (int)ppuStack_20;
  local_18 = &LAB_0058e6ac;
  iStack_1c = 0x58e674;
  FUN_00404ff0(&local_3c,ppuStack_20,puVar3);
  iStack_1c = 0x58e687;
  FUN_00405744(local_38,PTR_DAT_004010f8,2);
  iStack_1c = 0x58e68f;
  FUN_00404ff0(&local_18);
  iStack_1c = 0x58e697;
  FUN_004048d4(&local_14);
  iStack_1c = 0x58e6a4;
  FUN_00405008(&stack0xfffffff0,3);
  return;
}

