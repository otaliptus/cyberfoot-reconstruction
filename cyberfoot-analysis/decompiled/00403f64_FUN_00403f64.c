// Address: 00403f64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00403f64(void)

{
  int iVar1;
  ULONG_PTR UVar2;
  LONG LVar3;
  PEXCEPTION_RECORD pEVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  PVOID pvVar7;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStackY_34;
  PCONTEXT pCStackY_30;
  undefined4 uStackY_2c;
  PEXCEPTION_RECORD pEStackY_28;
  undefined4 uStackY_24;
  PVOID pvStackY_20;
  ULONG_PTR UStackY_1c;
  PEXCEPTION_RECORD pEStackY_18;
  undefined4 uStackY_14;
  
  if ((in_stack_00000004->ExceptionFlags & 6) != 0) {
    return 1;
  }
  UVar2 = in_stack_00000004->ExceptionInformation[1];
  pvVar7 = (PVOID)in_stack_00000004->ExceptionInformation[0];
  if (in_stack_00000004->ExceptionCode != 0xeedfade) {
    FUN_004039b8();
    if (DAT_0066c010 == (code *)0x0) {
      return 1;
    }
    UVar2 = (*DAT_0066c010)();
    if (UVar2 == 0) {
      return 1;
    }
    if (((in_stack_00000004->ExceptionCode != 0xeefface) &&
        (UVar2 = FUN_00403e7c(UVar2,in_stack_0000000c), DAT_00662030 != 0)) &&
       (DAT_0066202c == '\0')) {
      LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
      if (LVar3 == 0) {
        return 1;
      }
      pvVar7 = in_stack_00000004->ExceptionAddress;
      pEVar4 = in_stack_00000004;
      goto LAB_00404018;
    }
    pvVar7 = in_stack_00000004->ExceptionAddress;
  }
  pEVar4 = in_stack_00000004;
  if ((1 < DAT_00662030) && (DAT_0066202c == '\0')) {
    uStackY_14 = 0x404010;
    LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
    if (LVar3 == 0) {
      return 1;
    }
  }
LAB_00404018:
  pEVar4->ExceptionFlags = pEVar4->ExceptionFlags | 2;
  uStackY_14 = *in_FS_OFFSET;
  uStackY_24 = 0;
  uStackY_2c = 0x40403c;
  pCStackY_30 = in_stack_00000008;
  uStackY_34 = 0x40403c;
  pEStackY_28 = pEVar4;
  pvStackY_20 = pvVar7;
  UStackY_1c = UVar2;
  pEStackY_18 = pEVar4;
  (*DAT_0066c018)();
  uStackY_34 = 0x404045;
  puVar5 = (undefined4 *)FUN_00406fb0();
  uStackY_34 = *puVar5;
  *puVar5 = &uStackY_34;
  iVar1 = *(int *)(unaff_ESI + 4);
  *(undefined1 **)(unaff_ESI + 4) = &LAB_00404068;
  FUN_00403ecc();
                    /* WARNING: Could not recover jumptable at 0x00404066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(iVar1 + 5))();
  return uVar6;
}

