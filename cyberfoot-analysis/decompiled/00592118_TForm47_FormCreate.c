// Address: 00592118
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm47_FormCreate(int param_1)

{
  char *pcVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  char *local_38;
  wchar_t *local_34;
  int local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 6;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0059241e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = L"<shad>";
  local_30 = 0x59214d;
  FUN_00642c50(0x62,&local_10);
  local_30 = local_10;
  local_34 = L"</shad>";
  local_38 = (char *)0x592162;
  FUN_00405330(&local_c,3);
  local_38 = (char *)0x592170;
  FUN_00545088(*(undefined4 *)(param_1 + 0x350),local_c);
  local_38 = (char *)0x59217d;
  FUN_00642c50(0x206,&stack0xffffffec);
  local_38 = (char *)0x59218b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),unaff_EBX);
  local_38 = (char *)0x592198;
  FUN_00642c50(0x132,&stack0xffffffe8);
  local_38 = (char *)0x5921a6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),unaff_ESI);
  local_38 = (char *)0x5921b3;
  FUN_00642c50(0x202,&stack0xffffffe4);
  local_38 = (char *)0x5921c4;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x60),unaff_EDI);
  local_38 = (char *)0x5921d1;
  FUN_00642c50(0x203,&local_20);
  local_38 = (char *)0x5921e2;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x60),local_20);
  local_38 = (char *)0x5921ef;
  FUN_00642c50(0x204,&local_24);
  local_38 = (char *)0x592200;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x60),local_24);
  DAT_006d2260 = 0xffffffff;
  DAT_006d225c = 0;
  local_38 = (char *)0x59221d;
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar3 < 2) {
    local_38 = (char *)0x5923c2;
    FUN_00466128(*(undefined4 *)(param_1 + 0x360),0);
    DAT_006d225c = 0;
  }
  else {
    if (*(int *)PTR_DAT_0066b394 < 0) {
      if (*(int *)(PTR_DAT_0066ac78 + 8) < 0) {
        local_38 = (char *)0x5922bf;
        local_8 = FUN_0065208c(0x1d);
      }
      else {
        local_38 = (char *)0x5922b0;
        local_8 = FUN_0065208c(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c +
                                *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
      }
    }
    else {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + *(int *)PTR_DAT_0066b394 * 0x80);
      if (iVar4 < 0) {
        local_38 = (char *)0x592285;
        local_8 = FUN_0065208c(*(undefined4 *)
                                (*(int *)PTR_DAT_0066b718 + 0x3c + *(int *)PTR_DAT_0066b394 * 0x80))
        ;
      }
      else {
        local_38 = (char *)0x59226b;
        local_8 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8));
      }
    }
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        local_38 = "<img src=\"idx:";
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar4 * 0x294),&local_30);
        FUN_00404c64(&local_2c,3);
        local_38 = (char *)0x59230e;
        FUN_004051d4(&local_28,local_2c);
        local_38 = (char *)0x592334;
        FUN_0040526c(&local_28,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar4 * 0x294) * 4));
        local_38 = (char *)0x592342;
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x360),local_28);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_38 = (char *)0x592353;
    FUN_00642c50(0x29d,&local_38);
    pcVar1 = local_38;
    local_38 = (char *)0x592363;
    FUN_004052cc(&local_34,L"<img src=\"idx:203\"> ",pcVar1);
    local_38 = (char *)0x592371;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x360),local_34);
    if (local_8 < 0) {
      local_38 = (char *)0x59239c;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x360),0);
      DAT_006d225c = 0;
    }
    else {
      local_38 = (char *)0x592385;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x360),local_8);
      DAT_006d225c = local_8;
    }
    local_38 = (char *)0x5923ae;
    DAT_006d225c = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x360));
  }
  local_38 = (char *)0x5923e9;
  FUN_005924a8(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d225c * 0x294));
  pwVar2 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = L"幟譛工ೃ";
  local_30 = 0x592403;
  FUN_00405008(&local_38,2,pwVar2);
  local_30 = 0x592410;
  FUN_004048f8(&local_30,2);
  local_30 = 0x59241d;
  FUN_00405008(&local_28,8);
  return;
}

