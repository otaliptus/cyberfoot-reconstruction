// Address: 00404090
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00404090(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  bool bVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int aiStackY_34 [2];
  int *piStackY_2c;
  undefined4 uStackY_28;
  int *piStackY_24;
  
  if ((in_stack_00000004[1] & 6U) == 0) {
    if (*in_stack_00000004 == 0xeedfade) {
      iVar2 = *(int *)in_stack_00000004[6];
    }
    else {
      FUN_004039b8();
      if (DAT_0066c00c == (code *)0x0) {
        return 1;
      }
      iVar2 = (*DAT_0066c00c)();
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar6 = *(int *)(*(int *)(in_stack_00000008 + 4) + 5);
    piVar5 = (int *)(*(int *)(in_stack_00000008 + 4) + 9);
    do {
      piVar3 = (int *)*piVar5;
      iVar7 = iVar2;
      if (piVar3 == (int *)0x0) {
LAB_00404129:
        if (*in_stack_00000004 == 0xeedfade) {
          if ((DAT_00662030 < 2) || (DAT_0066202c != '\0')) goto LAB_004041a3;
          piStackY_24 = (int *)0x40419b;
          iVar2 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        else {
          uVar4 = (*DAT_0066c010)();
          FUN_00403e7c(uVar4,in_stack_0000000c);
          if ((DAT_00662030 == 0) || (DAT_0066202c != '\0')) goto LAB_004041a3;
          iVar2 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        if (iVar2 == 0) {
          return 1;
        }
LAB_004041a3:
        in_stack_00000004[1] = in_stack_00000004[1] | 2;
        uStackY_28 = 0;
        piStackY_2c = in_stack_00000004;
        aiStackY_34[1] = 0x4041c4;
        aiStackY_34[0] = in_stack_00000008;
        piStackY_24 = piVar5;
        (*DAT_0066c018)();
        iVar2 = aiStackY_34[0];
        aiStackY_34[0] = 0x4041ce;
        piVar5 = (int *)FUN_00406fb0();
        aiStackY_34[0] = *piVar5;
        *piVar5 = (int)aiStackY_34;
        *(undefined1 **)(unaff_ESI + 4) = &LAB_004041f0;
        FUN_00403eb8(piStackY_2c);
                    /* WARNING: Could not recover jumptable at 0x004041ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(iVar2 + 4))();
        return uVar4;
      }
      while( true ) {
        iVar1 = *piVar3;
        if (iVar1 == iVar7) goto LAB_00404129;
        if (*(int *)(iVar1 + -0x28) == *(int *)(iVar7 + -0x28)) {
          if (**(char **)(iVar1 + -0x2c) == **(char **)(iVar7 + -0x2c)) {
            bVar8 = *(char **)(iVar7 + -0x2c) == (char *)0xffffffff;
            FUN_00403180(*(char **)(iVar1 + -0x2c) + 1);
            if (bVar8) goto LAB_00404129;
          }
        }
        piVar3 = (int *)*piVar5;
        if (*(int **)(iVar7 + -0x24) == (int *)0x0) break;
        iVar7 = **(int **)(iVar7 + -0x24);
      }
      piVar5 = piVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 1;
}

