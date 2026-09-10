// Address: 005d35f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm82_FormCreate(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  iVar4 = 7;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_24 = &LAB_005d3813;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iVar4 = *(int *)PTR_DAT_0066b1e8;
  local_2c = 0x5d362d;
  FUN_004030d4(&local_20,*(int *)PTR_DAT_0066b5b8 + iVar4 * 0x130);
  local_2c = 0x5d363c;
  FUN_004030a4(&local_20,&DAT_005d3824,0x17);
  local_2c = 0x5d3647;
  FUN_00405194(&local_8,&local_20);
  local_2c = 0x5d366a;
  FUN_0040526c(&local_8,*(undefined4 *)
                         (PTR_DAT_0066b660 +
                         *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar4 * 0x130) * 4));
  local_2c = 0x5d3678;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_8);
  local_2c = 0x5d3685;
  FUN_00642c50(0x72,&local_24);
  local_2c = 0x5d3693;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_24);
  local_2c = 0x5d36a0;
  FUN_00642c50(0x2be,&local_28);
  local_2c = 0x5d36ae;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x300),local_28);
  iVar4 = 1;
  do {
    local_2c = 0x5d36bd;
    FUN_00409dd8(iVar4,&local_30);
    local_2c = 0x5d36ca;
    FUN_00404bac(&local_30,&DAT_005d3830);
    local_2c = 0x5d36d5;
    FUN_004051d4(&local_2c,local_30);
    uVar2 = local_2c;
    local_2c = 0x5d36e3;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x300),uVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1f);
  local_2c = 0x5d36f5;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar4 = iVar4 + -1;
  if (0 < iVar4) {
    iVar5 = 1;
    do {
      iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130);
      if (((-1 < iVar1) && (iVar1 == *(int *)(PTR_DAT_0066ac78 + 8))) &&
         (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar5 * 0x130))) {
        local_2c = 0x5d3756;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar5 * 0x130),&local_3c);
        local_2c = local_3c;
        local_30 = &DAT_005d3830;
        local_34 = 0x5d3774;
        FUN_00404b48(&local_40,*(int *)PTR_DAT_0066b5b8 + iVar5 * 0x130);
        local_34 = local_40;
        local_38 = 0x5d3784;
        FUN_00404c64(&local_38,3);
        local_2c = 0x5d378f;
        FUN_004051d4(&local_34,local_38);
        local_2c = 0x5d37ac;
        FUN_0054ce64(*(undefined4 *)(param_1 + 0x300),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar5 * 0x130),local_34);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_2c = 0x5d37d3;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x300),
               *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + *(int *)PTR_DAT_0066b1e8 * 0x130));
  puVar3 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005d381a;
  local_24 = (undefined1 *)0x5d37ed;
  FUN_004048f8(&local_40,3,puVar3);
  local_24 = (undefined1 *)0x5d37f5;
  FUN_00404ff0(&local_34);
  local_24 = (undefined1 *)0x5d37fd;
  FUN_004048d4(&local_30);
  local_24 = (undefined1 *)0x5d380a;
  FUN_00405008(&local_2c,3);
  local_24 = (undefined1 *)0x5d3812;
  FUN_00404ff0(&local_8);
  return;
}

