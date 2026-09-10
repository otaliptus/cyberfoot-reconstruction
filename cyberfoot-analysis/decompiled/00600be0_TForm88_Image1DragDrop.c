// Address: 00600be0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_Image1DragDrop
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 uVar4;
  int iStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined1 local_80 [52];
  undefined1 local_4c [52];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_90 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  local_10 = 0;
  puStack_94 = &LAB_00600e98;
  iStack_98 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_98;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404ff0(&local_10);
  iVar1 = (&DAT_006d4264)[*(int *)PTR_DAT_0066b5ec];
  cVar2 = FUN_00403c10(local_c,PTR_PTR_004386b8);
  if (cVar2 == '\0') {
    FUN_00403c10(local_c,PTR_PTR_00457844);
  }
  cVar2 = FUN_00403c10(param_3,PTR_PTR_004386b8);
  if (cVar2 == '\0') {
    cVar2 = FUN_00403c10(param_3,PTR_PTR_00457844);
    if (cVar2 == '\0') {
      cVar2 = FUN_00403c10(param_3,PTR_PTR_004df4e4);
      if (cVar2 != '\0') {
        unaff_EDI = *(int *)(param_3 + 0xc);
      }
    }
    else {
      unaff_EDI = *(int *)(param_3 + 0xc);
    }
  }
  else {
    unaff_EDI = *(int *)(param_3 + 0xc);
  }
  cVar2 = FUN_00403c10(param_3,PTR_PTR_004386b8);
  if (cVar2 == '\0') {
    cVar2 = FUN_00403c10(param_3,PTR_PTR_00457844);
    if (cVar2 == '\0') {
      cVar2 = FUN_00403c10(param_3,PTR_PTR_004df4e4);
      if (cVar2 == '\0') goto LAB_00600ded;
    }
  }
  if ((unaff_EDI < 0xb) && (0 < unaff_EDI)) {
    iVar3 = func_0x00600ac0(local_8,param_5,param_4);
    if (0 < iVar3) {
      FUN_00465978((&DAT_006d413c)[unaff_EDI],*(undefined4 *)(PTR_DAT_0066b388 + iVar3 * 4 + -4));
      FUN_0046599c((&DAT_006d413c)[unaff_EDI],*(undefined4 *)(PTR_DAT_0066b3bc + iVar3 * 4 + -4));
      *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + unaff_EDI * 4) = iVar3;
      FUN_00465978(*(undefined4 *)(&DAT_006d4184 + unaff_EDI * 4),
                   *(int *)(PTR_DAT_0066b388 + iVar3 * 4 + -4) + -0xd);
      FUN_0046599c(*(undefined4 *)(&DAT_006d4184 + unaff_EDI * 4),
                   *(int *)(PTR_DAT_0066b3bc + iVar3 * 4 + -4) + 0x30);
      FUN_00465978(*(undefined4 *)(&DAT_006d4214 + unaff_EDI * 4),
                   *(int *)(PTR_DAT_0066b388 + iVar3 * 4 + -4) + 0x11);
      uVar4 = 0x600d83;
      FUN_0046599c(*(undefined4 *)(&DAT_006d4214 + unaff_EDI * 4),
                   *(int *)(PTR_DAT_0066b3bc + iVar3 * 4 + -4) + 0x20);
      if (0 < *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + unaff_EDI * 4)) {
        iStack_98 = iVar3;
        FUN_00605634(local_8,unaff_EDI,
                     *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + unaff_EDI * 4),
                     uVar4);
      }
      FUN_00465978(*(undefined4 *)(&DAT_006d41cc + unaff_EDI * 4),
                   *(int *)(PTR_DAT_0066b388 + iVar3 * 4 + -4) + 0x15);
      FUN_0046599c(*(undefined4 *)(&DAT_006d41cc + unaff_EDI * 4),
                   *(int *)(PTR_DAT_0066b3bc + iVar3 * 4 + -4) + 0xf);
    }
  }
LAB_00600ded:
  FUN_00642c6c(iVar1);
  FUN_0064354c(iVar1,&local_10);
  FUN_004030d4(local_4c,&DAT_00600ea8);
  FUN_004030a4(local_4c,*(int *)PTR_DAT_0066af70 +
                        *(int *)(&DAT_006d425c + *(int *)PTR_DAT_0066b5ec * 4) * 0x2f8,0x31);
  FUN_004030d4(local_80,local_4c);
  FUN_004030a4(local_80,&DAT_00600ec4,0x32);
  FUN_00405194(&local_18,local_80);
  uVar4 = local_18;
  FUN_00405330(&local_14,3);
  FUN_00545088(*(undefined4 *)(local_8 + 0x338),local_14);
  *in_FS_OFFSET = (int)L"</p></shad>";
  FUN_00405008(&local_18,3,uVar4,&LAB_00600e9f);
  return;
}

