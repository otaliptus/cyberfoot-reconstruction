// Address: 005a6148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a6148(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4 [88];
  undefined1 local_7c [88];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = PTR_DAT_0066b058;
  puStack_fc = &stack0xfffffffc;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_24 = 0;
  local_d8 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_100 = &LAB_005a6512;
  uStack_104 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_104;
  local_8 = param_1;
  FUN_00466128(DAT_006d25a0,0);
  FUN_00466128(DAT_006d259c,0);
  FUN_004048d4(&local_1c);
  FUN_004048d4(&local_20);
  local_14 = 0;
  local_c = FUN_0064dee4(param_2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  FUN_004048d4(&local_18);
  *(undefined4 *)(*(int *)(local_8 + 0x30c) + 0x23c) =
       *(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc);
  iVar4 = FUN_00405ef4(*(undefined4 *)puVar2);
  if (-1 < iVar4) {
    do {
      if ((*(int *)(*(int *)puVar2 + 4 + iVar4 * 0x14) == local_c) &&
         (*(int *)(*(int *)puVar2 + 0xc + iVar4 * 0x14) == 1)) {
        local_14 = local_14 + 0x14;
        local_10 = FUN_006575ac(local_c,*(undefined4 *)(*(int *)puVar2 + iVar4 * 0x14));
        FUN_004048d4(&local_1c);
        FUN_004048d4(&local_20);
        if (*(int *)(*(int *)puVar2 + 0x10 + iVar4 * 0x14) < 50000) {
          iVar1 = *(int *)(*(int *)puVar2 + 0x10 + iVar4 * 0x14);
          if (-1 < iVar1) {
            iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
            if (iVar1 < iVar5) {
              FUN_00404b48(&local_1c,
                           *(int *)PTR_DAT_0066b718 +
                           *(int *)(*(int *)puVar2 + 0x10 + iVar4 * 0x14) * 0x80);
            }
          }
        }
        else {
          FUN_00404b48(&local_1c,
                       *(int *)PTR_DAT_0066b4b4 + -0x249ef8 +
                       *(int *)(*(int *)puVar2 + 0x10 + iVar4 * 0x14) * 0x30);
        }
        if (-1 < local_10) {
          FUN_004030d4(local_7c,
                       "@<IMG src=\"file:teams\\miniescudos\\mini_aik_sue.bmp\"><IND x=\"338\">");
          iVar1 = local_10;
          FUN_004030a4(local_7c,*(int *)PTR_DAT_0066b5b8 +
                                *(int *)(*(int *)PTR_DAT_0066b560 + 0xc + local_10 * 0x1c) * 0x130,
                       0x54);
          FUN_004030d4(local_d4,local_7c);
          FUN_004030a4(local_d4,&DAT_005a6564,0x57);
          FUN_00404b48(&local_24,local_d4);
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b560 + 0x14 + iVar1 * 0x1c),&local_d8);
          FUN_00404c64(&local_20,4);
        }
        pcVar8 = "<FONT color=\"#008040\">";
        uVar9 = local_18;
        FUN_00409dd8(*(int *)(*(int *)puVar2 + iVar4 * 0x14) + *(int *)PTR_DAT_0066b7c4,&local_dc);
        pcVar7 = "<IND x=\"38\"><IMG src=\"idx:";
        uVar6 = local_dc;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066af70 + 0x3c +
                      *(int *)(*(int *)puVar2 + 8 + iVar4 * 0x14) * 0x2f8),&local_e0);
        FUN_00404b48(&local_e4,
                     *(int *)PTR_DAT_0066af70 + *(int *)(*(int *)puVar2 + 8 + iVar4 * 0x14) * 0x2f8,
                     *(int *)PTR_DAT_0066af70,"\"<IND x=\"45\">",local_e0,pcVar7,uVar6,pcVar8,uVar9)
        ;
        pcVar7 = "<IND x=\"185\"><IMG src=\"idx:";
        uVar6 = local_e4;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066af70 + 0x3c +
                      *(int *)(*(int *)puVar2 + 0x1c + iVar4 * 0x14) * 0x2f8),&local_e8);
        FUN_00404b48(&local_ec,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)puVar2 + 0x1c + iVar4 * 0x14) * 0x2f8,*(int *)PTR_DAT_0066af70
                     ,"<IND x=\"192\">",local_e8,pcVar7,uVar6);
        FUN_00404c64(&local_18,0x10);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  if (local_14 < 0x191) {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x30c),400);
  }
  else {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x30c),local_14 + 0x28);
  }
  FUN_0047eea0(*(undefined4 *)(*(int *)(local_8 + 0x308) + 0x20c),
               *(int *)(*(int *)(local_8 + 0x30c) + 0x4c) + 2);
  FUN_00533bc0(*(undefined4 *)(*(int *)(local_8 + 0x30c) + 0x22c),0);
  FUN_00533bc0(*(undefined4 *)(*(int *)(local_8 + 0x30c) + 0x22c),local_18);
  puVar3 = puStack_fc;
  *in_FS_OFFSET = uStack_104;
  puStack_fc = &LAB_005a6519;
  puStack_100 = (undefined1 *)0x5a6504;
  FUN_004048f8(&local_ec,6,puVar3);
  puStack_100 = (undefined1 *)0x5a6511;
  FUN_004048f8(&local_24,4);
  return;
}

