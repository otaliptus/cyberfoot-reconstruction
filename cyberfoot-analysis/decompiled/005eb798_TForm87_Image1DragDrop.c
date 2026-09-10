// Address: 005eb798
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_Image1DragDrop
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  
  cVar1 = FUN_00403c10(param_3,PTR_PTR_004f73b0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00403c10(param_2,PTR_PTR_004386b8);
    if (cVar1 == '\0') {
      FUN_00403c10(param_2,PTR_PTR_00457844);
    }
    cVar1 = FUN_00403c10(param_3,PTR_PTR_004386b8);
    if (cVar1 == '\0') {
      cVar1 = FUN_00403c10(param_3,PTR_PTR_00457844);
      if (cVar1 == '\0') {
        cVar1 = FUN_00403c10(param_3,PTR_PTR_004df4e4);
        if (cVar1 != '\0') {
          unaff_ESI = *(int *)(param_3 + 0xc);
        }
      }
      else {
        unaff_ESI = *(int *)(param_3 + 0xc);
      }
    }
    else {
      unaff_ESI = *(int *)(param_3 + 0xc);
    }
    cVar1 = FUN_00403c10(param_3,PTR_PTR_004386b8);
    if (((cVar1 == '\0') && (cVar1 = FUN_00403c10(param_3,PTR_PTR_00457844), cVar1 == '\0')) &&
       (cVar1 = FUN_00403c10(param_3,PTR_PTR_004df4e4), cVar1 == '\0')) {
      return;
    }
    if (((unaff_ESI < 0xc) && (1 < unaff_ESI)) &&
       (iVar2 = FUN_005eb714(param_1,param_5,param_4), 0 < iVar2)) {
      FUN_00465978((&DAT_006d35e4)[unaff_ESI],*(undefined4 *)(PTR_DAT_0066b388 + iVar2 * 4 + -4));
      FUN_0046599c((&DAT_006d35e4)[unaff_ESI],*(undefined4 *)(PTR_DAT_0066b3bc + iVar2 * 4 + -4));
      *(int *)(&DAT_006d3668 + unaff_ESI * 0x10) = iVar2;
      FUN_00465978((&DAT_006d34f4)[unaff_ESI],*(int *)(PTR_DAT_0066b388 + iVar2 * 4 + -4) + -0xd);
      FUN_0046599c((&DAT_006d34f4)[unaff_ESI],*(int *)(PTR_DAT_0066b3bc + iVar2 * 4 + -4) + 0x30);
      if (0 < *(int *)(&DAT_006d3674 + unaff_ESI * 0x10)) {
        FUN_005ea21c(param_1,unaff_ESI,*(undefined4 *)(&DAT_006d3674 + unaff_ESI * 0x10));
      }
      FUN_00465978(*(undefined4 *)(&DAT_006d3584 + unaff_ESI * 4),
                   *(int *)(PTR_DAT_0066b388 + iVar2 * 4 + -4) + 0x15);
      FUN_0046599c(*(undefined4 *)(&DAT_006d3584 + unaff_ESI * 4),
                   *(int *)(PTR_DAT_0066b3bc + iVar2 * 4 + -4) + 0xf);
    }
  }
  return;
}

