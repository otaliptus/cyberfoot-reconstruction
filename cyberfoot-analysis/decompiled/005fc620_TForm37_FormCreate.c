// Address: 005fc620
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm37_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  int *piVar5;
  int iStack_c;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 8;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_20 = &LAB_005fc988;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5fc650;
  FUN_00642c50(0x1e0,&stack0xffffffe8);
  puStack_28 = (undefined1 *)0x5fc661;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),unaff_EDI);
  puStack_28 = (undefined1 *)0x5fc66e;
  FUN_00642c50(0x1e1,&local_1c);
  puStack_28 = (undefined1 *)0x5fc67f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_1c);
  puStack_28 = (undefined1 *)0x5fc68c;
  FUN_00642c50(0x1e2,&puStack_20);
  puStack_28 = (undefined1 *)0x5fc69d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),puStack_20);
  puStack_28 = (undefined1 *)0x5fc6aa;
  FUN_00642c50(0x1e3,&uStack_24);
  puStack_28 = (undefined1 *)0x5fc6bb;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x33c),uStack_24);
  puStack_28 = (undefined1 *)0x5fc6c8;
  FUN_00642c50(0x1e4,&puStack_28);
  puVar1 = puStack_28;
  puStack_28 = (undefined1 *)0x5fc6d9;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x338),puVar1);
  if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066adb0 * 0x2f8) == '\0') ||
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066ae1c * 0x2f8) == '\0')) {
    DAT_006d40f4 = 1;
  }
  else {
    DAT_006d40f4 = 2;
  }
  if (DAT_006d40f4 == 2) {
    DAT_006d40f8 = *(int *)PTR_DAT_0066adb0;
  }
  else if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066adb0 * 0x2f8) == '\0') {
    DAT_006d40f8 = *(int *)PTR_DAT_0066ae1c;
  }
  else {
    DAT_006d40f8 = *(int *)PTR_DAT_0066adb0;
  }
  puStack_28 = (undefined1 *)0x5fc771;
  FUN_00645508(DAT_006d40f8,&iStack_2c);
  if (iStack_2c != 0) {
    puStack_28 = (undefined1 *)0x5fc784;
    FUN_00645508(DAT_006d40f8,&uStack_30);
    puStack_28 = &LAB_005fc79b;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 800) + 0x168),uStack_30);
  }
  iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + DAT_006d40f8 * 0x2f8);
  iStack_c = 0x19;
  piVar5 = (int *)PTR_DAT_0066ad68;
  do {
    iVar4 = 1;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + 0x58 + iVar4 * 4) == *piVar5) &&
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                   *(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + -4 + iVar4 * 4) * 0x130) !=
          '\0')) {
        puStack_28 = (undefined1 *)0x5fc81b;
        iVar2 = FUN_0044e868(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x22c));
        puStack_28 = (undefined1 *)0x5fc83f;
        FUN_00404b6c(&uStack_34,
                     *(undefined4 *)
                      (PTR_DAT_0066b6bc +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + 0x58 + iVar4 * 4) * 4 + -4)
                    );
        puStack_28 = (undefined1 *)0x5fc84a;
        FUN_0044e308(iVar2,uStack_34);
        puStack_28 = (undefined1 *)0x5fc86d;
        FUN_00404b48(&uStack_38,
                     *(int *)PTR_DAT_0066b5b8 +
                     *(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + -4 + iVar4 * 4) * 0x130);
        puStack_28 = (undefined1 *)0x5fc87b;
        (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),uStack_38);
        if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 +
                     *(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + -4 + iVar4 * 4) * 0x130) ==
            '\0') {
          puStack_28 = &LAB_005fc8b6;
          FUN_0044e4c0(iVar2,0,0);
        }
        else {
          puStack_28 = (undefined1 *)0x5fc8a8;
          FUN_0044e4c0(iVar2,0,1);
        }
        puStack_28 = (undefined1 *)0x5fc8d9;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + -4 + iVar4 * 4) * 0x130),
                     &uStack_3c);
        puStack_28 = (undefined1 *)0x5fc8e7;
        (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),uStack_3c);
        puStack_28 = (undefined1 *)0x5fc90a;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + -4 + iVar4 * 4) * 0x130),
                     &uStack_40);
        puStack_28 = (undefined1 *)0x5fc917;
        FUN_00404bac(&uStack_40,&DAT_005fc9a0);
        puStack_28 = (undefined1 *)0x5fc925;
        (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),uStack_40);
        puStack_28 = (undefined1 *)0x5fc93b;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar3 * 0xf8 + -4 + iVar4 * 4),
                     &uStack_44);
        puStack_28 = &LAB_005fc949;
        (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),uStack_44);
      }
      puVar1 = local_1c;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xc);
    piVar5 = piVar5 + 1;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_005fc98f;
  puStack_20 = (undefined1 *)0x5fc97a;
  FUN_004048f8(&uStack_44,7,puVar1);
  puStack_20 = (undefined1 *)0x5fc987;
  FUN_00405008(&puStack_28,5);
  return;
}

