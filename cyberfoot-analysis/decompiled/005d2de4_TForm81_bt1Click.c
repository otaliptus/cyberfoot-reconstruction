// Address: 005d2de4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm81_bt1Click(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *puStack_20;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  iVar5 = 7;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24 = &LAB_005d3171;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined4 *)0x5d2e15;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0xcc))();
  if (iVar5 != -1) {
    local_2c = (undefined4 *)0x5d2e2a;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))();
    if (iVar5 != -1) {
      local_2c = (undefined4 *)0x5d2e3f;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0xcc))();
      local_2c = *(undefined4 **)(DAT_006d3250 + iVar5 * 4);
      local_30 = (undefined1 *)0x5d2e57;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))();
      puVar6 = local_2c;
      local_2c = (undefined4 *)0x5d2e66;
      cVar3 = FUN_005d2d70(*(undefined4 *)(DAT_006d325c + iVar5 * 4),puVar6);
      if (cVar3 == '\0') {
        DAT_006d3264 = '\0';
        local_2c = (undefined4 *)0x5d2efe;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))();
        local_2c = *(undefined4 **)(DAT_006d325c + iVar5 * 4);
        local_30 = (undefined1 *)0x5d2f13;
        uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x324));
        puVar6 = local_2c;
        local_2c = (undefined4 *)0x5d2f1d;
        cVar3 = FUN_005d2b04(param_1,uVar4,puVar6);
        if (cVar3 == '\0') {
          local_2c = (undefined4 *)0x5d2f32;
          FUN_00466128(*(undefined4 *)(param_1 + 800),1);
          if (DAT_006d3265 == '\0') {
            if (DAT_006d3264 == '\0') {
              local_2c = (undefined4 *)0x5d2f71;
              FUN_00642c50(0x2b6,&local_30);
              local_2c = (undefined4 *)0x5d2f7f;
              FUN_004e1414(*(undefined4 *)(param_1 + 800),local_30);
            }
            else {
              local_2c = (undefined4 *)0x5d2f91;
              FUN_00642c50(0x2b7,&local_38);
              local_2c = local_38;
              local_30 = &LAB_005d3188;
              local_34 = 0x5d2fa8;
              FUN_006468f4(*(undefined4 *)PTR_DAT_0066ae44,&local_3c);
              local_34 = local_3c;
              local_38 = (undefined4 *)0x5d2fb8;
              FUN_00405330(&local_34,3);
              local_2c = (undefined4 *)0x5d2fc6;
              FUN_004e1414(*(undefined4 *)(param_1 + 800),local_34);
            }
          }
          else {
            local_2c = (undefined4 *)0x5d2f48;
            FUN_00642c50(0x2b6,&local_2c);
            puVar6 = local_2c;
            local_2c = (undefined4 *)0x5d2f56;
            FUN_004e1414(*(undefined4 *)(param_1 + 800),puVar6);
          }
        }
        else {
          local_2c = (undefined4 *)0x5d2fd8;
          FUN_00466128(*(undefined4 *)(param_1 + 800),1);
          local_2c = (undefined4 *)0x5d2fe5;
          FUN_00642c50(0x2b8,&local_40);
          local_2c = (undefined4 *)0x5d2ff3;
          FUN_004e1414(*(undefined4 *)(param_1 + 800),local_40);
          local_2c = (undefined4 *)0x5d2fff;
          iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
          puVar6 = (undefined4 *)(iVar5 + 1);
          local_30 = (undefined1 *)0x5d3018;
          local_2c = puVar6;
          FUN_004060a8(PTR_DAT_0066b0d4,PTR_DAT_00488d00,1);
          local_2c = (undefined4 *)0x5d3026;
          iVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x324));
          if (iVar5 == 0) {
            local_2c = (undefined4 *)0x5d3038;
            iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))();
            *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -0x18 + (int)puVar6 * 0x18) =
                 *(undefined4 *)(DAT_006d325c + iVar5 * 4);
            *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -0x14 + (int)puVar6 * 0x18) =
                 *(undefined4 *)(PTR_DAT_0066ac78 + 8);
          }
          else {
            *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -0x18 + (int)puVar6 * 0x18) =
                 *(undefined4 *)(PTR_DAT_0066ac78 + 8);
            local_2c = (undefined4 *)0x5d308b;
            iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))();
            *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -0x14 + (int)puVar6 * 0x18) =
                 *(undefined4 *)(DAT_006d325c + iVar5 * 4);
          }
          local_2c = (undefined4 *)0x5d30ae;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0xcc))();
          puVar1 = (undefined4 *)
                   (PTR_DAT_0066b574 + *(int *)(DAT_006d3250 + iVar5 * 4) * 0x18 + -0x10);
          iVar5 = *(int *)PTR_DAT_0066b0d4;
          *(undefined4 *)(iVar5 + -8 + (int)puVar6 * 0x18) = *puVar1;
          *(undefined4 *)(iVar5 + -4 + (int)puVar6 * 0x18) = puVar1[1];
          local_2c = (undefined4 *)0x0;
          local_30 = (undefined1 *)0xffffffff;
          local_34 = 0xffffffff;
          local_38 = (undefined4 *)0xffffffff;
          local_3c = *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -4 + (int)puVar6 * 0x18);
          local_40 = *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -8 + (int)puVar6 * 0x18);
          FUN_0065a1c0(*(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -0x18 + (int)puVar6 * 0x18),
                       *(undefined4 *)(*(int *)PTR_DAT_0066b0d4 + -0x14 + (int)puVar6 * 0x18),
                       0xffffffff);
          local_2c = (undefined4 *)0x5d311e;
          (**(code **)(**(int **)(param_1 + 0x31c) + 100))(*(int **)(param_1 + 0x31c),0);
          local_2c = (undefined4 *)0x5d312f;
          (**(code **)(**(int **)(param_1 + 0x2fc) + 0xd0))(*(int **)(param_1 + 0x2fc),0xffffffff);
          local_2c = (undefined4 *)0x5d313c;
          (**(code **)(**(int **)(param_1 + 0x2fc) + 100))(*(int **)(param_1 + 0x2fc),0);
          local_2c = (undefined4 *)0x5d3149;
          FUN_00466128(*(undefined4 *)(param_1 + 800),1);
          local_2c = (undefined4 *)0x5d314e;
          FUN_005d25a4();
        }
      }
      else {
        local_2c = (undefined4 *)0x5d2e77;
        FUN_00466128(*(undefined4 *)(param_1 + 800),1);
        local_2c = (undefined4 *)0x5d2e85;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))();
        local_2c = (undefined4 *)0x5d2ea2;
        FUN_004030d4(&local_24,*(int *)PTR_DAT_0066af70 + *(int *)(DAT_006d325c + iVar5 * 4) * 0x2f8
                    );
        local_2c = (undefined4 *)0x5d2eb1;
        FUN_004030a4(&local_24,&DAT_005d3180,0x1a);
        local_2c = (undefined4 *)0x5d2ebc;
        FUN_00405194(&local_8,&local_24);
        local_2c = &local_8;
        local_30 = (undefined1 *)0x5d2ecd;
        FUN_00642c50(0x2b5,&local_28);
        puVar6 = local_2c;
        local_2c = (undefined4 *)0x5d2ed6;
        FUN_0040526c(puVar6,local_28);
        local_2c = (undefined4 *)0x5d2ee4;
        FUN_004e1414(*(undefined4 *)(param_1 + 800),local_8);
      }
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_005d3178;
  local_24 = (undefined1 *)0x5d3168;
  FUN_00405008(&local_40,7,puVar2);
  local_24 = (undefined1 *)0x5d3170;
  FUN_00404ff0(&local_8);
  return;
}

