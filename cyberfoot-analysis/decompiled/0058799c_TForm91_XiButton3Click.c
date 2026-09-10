// Address: 0058799c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm91_XiButton3Click(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined *local_38;
  undefined *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined *local_10;
  undefined4 local_c;
  float local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = (undefined *)0x6;
  do {
    local_8 = 0.0;
    local_10 = local_10 + -1;
  } while (local_10 != (undefined *)0x0);
  local_24 = &LAB_00587ef6;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iVar7 = DAT_006d21d4;
  if (DAT_006d21dd == '\0') {
    if (DAT_006d21dc == '\0') {
      *PTR_DAT_0066b62c = 0;
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + DAT_006d21d4 * 0x130) * 0x2f8) == '\0'
         ) {
        local_2c = (char *)0x587d95;
        local_20 = &stack0xfffffffc;
        FUN_00587f44(param_1,&local_24);
        local_2c = (char *)0x587da3;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_24);
      }
      else {
        local_2c = (char *)0x0;
        local_30 = 0x587db4;
        FUN_00642c50(0x416,&local_30);
        local_34 = &DAT_00587f3c;
        local_38 = (undefined *)0x587dd2;
        FUN_00405194(&local_34,*(int *)PTR_DAT_0066b5b8 + DAT_006d21d4 * 0x130);
        local_38 = local_34;
        FUN_00405330(&local_2c,3);
        local_30 = 0x587ded;
        FUN_00404b6c(&local_28,local_2c);
        local_30 = 0x587dfe;
        iVar7 = FUN_00437ef0(local_28,3,CONCAT22(extraout_var,DAT_00587f40));
        if (iVar7 == 1) {
          *PTR_DAT_0066b62c = 1;
          local_2c = (char *)0x587e16;
          FUN_00642c50(0x415,&local_38);
          local_2c = (char *)0x587e24;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_38);
        }
      }
      if (*PTR_DAT_0066b62c != '\0') {
        local_2c = (char *)0x587e46;
        FUN_00650ec4(DAT_006d21d4,*(undefined4 *)(PTR_DAT_0066ac78 + 8),
                     *(undefined4 *)PTR_DAT_0066acb8);
        local_2c = (char *)0x587e54;
        (**(code **)(**(int **)(param_1 + 0x300) + 0x1dc))();
        local_2c = (char *)0x587e5b;
        FUN_005862fc(param_1);
        local_2c = (char *)0x587e68;
        FUN_00466128(*(undefined4 *)(param_1 + 0x358),0);
        local_2c = (char *)0x587e75;
        FUN_00466128(*(undefined4 *)(param_1 + 0x378),0);
        local_2c = (char *)0x587e82;
        FUN_00466128(*(undefined4 *)(param_1 + 0x37c),0);
        local_2c = (char *)0x587e8f;
        FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
        local_2c = (char *)0x587e9c;
        FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
        local_2c = (char *)0x587ea9;
        FUN_00466128(*(undefined4 *)(param_1 + 0x354),1);
      }
    }
    else {
      local_20 = (undefined1 *)0x0;
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)PTR_DAT_0066b76c * 0x2f8)) {
      case 0:
        local_20 = (undefined1 *)0x5;
        break;
      case 1:
        local_20 = (undefined1 *)0x14;
        break;
      case 2:
        local_20 = (undefined1 *)0xf;
        break;
      case 3:
        local_20 = (undefined1 *)0xc;
        break;
      case 4:
      case 5:
        local_20 = (undefined1 *)0x7;
      }
      local_8 = (float)*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x128 + DAT_006d21d4 * 0x130) /
                _DAT_00587f34;
      local_2c = (char *)0x587b6b;
      iVar6 = FUN_00402c38();
      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar7 * 0x130) =
           iVar6 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + iVar7 * 0x130);
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + DAT_006d21d4 * 0x130) = 0;
      local_2c = (char *)0x587ba0;
      iVar7 = FUN_004032c8(0x1e);
      local_2c = (char *)0x587baa;
      FUN_00647c48(iVar7 + 10,DAT_006d21d4);
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + DAT_006d21d4 * 0x130) == '\0') {
        local_2c = (char *)0x587be5;
        iVar7 = FUN_004032c8(100);
        if (iVar7 == 1) {
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + DAT_006d21d4 * 0x130) = 1;
        }
      }
      else {
        local_2c = (char *)0x587bc6;
        iVar7 = FUN_004032c8(10);
        if (iVar7 != 1) {
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + DAT_006d21d4 * 0x130) = 0;
        }
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + DAT_006d21d4 * 0x130) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf0 + DAT_006d21d4 * 0x130) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xec + DAT_006d21d4 * 0x130) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xf5 + DAT_006d21d4 * 0x130) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xf4 + DAT_006d21d4 * 0x130) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + DAT_006d21d4 * 0x130) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + DAT_006d21d4 * 0x130) = 3;
      iVar3 = DAT_006d21d4;
      puVar2 = PTR_DAT_0066b574;
      iVar7 = *(int *)PTR_DAT_0066b5b8;
      iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
      *(undefined4 *)(iVar7 + 0x68 + DAT_006d21d4 * 0x130) =
           *(undefined4 *)(PTR_DAT_0066b574 + iVar6 * 0x18 + -0x10);
      *(undefined4 *)(iVar7 + 0x6c + iVar3 * 0x130) = *(undefined4 *)(puVar2 + iVar6 * 0x18 + -0xc);
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x80 + DAT_006d21d4 * 0x130) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + DAT_006d21d4 * 0x130) =
           *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
      iVar7 = 0;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + DAT_006d21d4 * 0x130 + 0x8c + iVar7 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + DAT_006d21d4 * 0x130 + 0xb8 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0xb);
      local_2c = (char *)0x587d28;
      FUN_00652988(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
      piVar1 = *(int **)(DAT_006d21cc + 0x300);
      local_2c = (char *)0x587d3d;
      uVar5 = (**(code **)(*piVar1 + 0x138))();
      local_2c = (char *)0x587d49;
      (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar5);
      local_2c = (char *)0x587d55;
      FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
      local_2c = (char *)0x587d5f;
      FUN_00483bc4(DAT_006d21cc);
    }
  }
  else {
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + DAT_006d21d4 * 0x130) = 0xffffffff;
    piVar1 = *(int **)(DAT_006d21cc + 0x300);
    local_2c = (char *)0x5879f9;
    local_20 = &stack0xfffffffc;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    local_2c = (char *)0x587a05;
    (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar5);
    DAT_006d21dd = '\0';
    local_2c = (char *)0x587a19;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
    local_2c = (char *)0x587a26;
    FUN_00466128(*(undefined4 *)(param_1 + 0x354),0);
    local_2c = (char *)0x587a33;
    FUN_00466128(*(undefined4 *)(param_1 + 0x378),0);
    local_2c = (char *)0x587a40;
    FUN_00466128(*(undefined4 *)(param_1 + 0x37c),0);
    local_2c = (char *)0x587a4d;
    FUN_00466128(*(undefined4 *)(param_1 + 0x358),0);
    local_2c = (char *)0x587a5a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),0);
    local_2c = "h\f\x7fX";
    FUN_00652988(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    local_2c = "<shad>";
    local_30 = 0x587a7a;
    uVar5 = (**(code **)(**(int **)(param_1 + 0x300) + 0x11c))();
    local_30 = 0x587a82;
    FUN_00409dd8(uVar5,&stack0xffffffe8);
    local_34 = &DAT_00587f1c;
    local_38 = (undefined *)0x587a97;
    local_30 = unaff_ESI;
    FUN_00404c64(&stack0xffffffec,3);
    local_38 = (undefined *)0x587aa2;
    FUN_004051d4(&local_10,unaff_EBX);
    local_38 = local_10;
    FUN_00642c50(0x49,&stack0xffffffe4);
    FUN_00405330(&local_c,3);
    local_2c = (char *)0x587ad5;
    FUN_00545088(*(undefined4 *)(param_1 + 0x340),local_c);
  }
  puVar4 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00587efd;
  local_24 = (undefined1 *)0x587ec3;
  FUN_00405008(&local_38,4,puVar4);
  local_24 = (undefined1 *)0x587ecb;
  FUN_004048d4(&local_28);
  local_24 = (undefined1 *)0x587ed3;
  FUN_00404ff0(&local_24);
  local_24 = (undefined1 *)0x587edb;
  FUN_00404ff0(&stack0xffffffe4);
  local_24 = (undefined1 *)0x587ee8;
  FUN_004048f8(&stack0xffffffe8,2);
  local_24 = (undefined1 *)0x587ef5;
  FUN_00405008(&local_10,2);
  return;
}

